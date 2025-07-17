#include<Windows.h>
//#include "resource.h"

//IDI_MYICON ICON "my_icon.ico"

const char g_szClassName[] = "myWindowClass";

//The window procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lparam)
{
    switch(msg)
    {
    case WM_LBUTTONDOWN:
        {
            char szFileName[MAX_PATH];
            HINSTANCE hInstance = GetModuleHandle(NULL);
            GetModuleFileName(hInstance, szFileName, MAX_PATH);
            MessageBox(hwnd, szFileName, "Location of this program is: ", MB_OK | MB_ICONINFORMATION);
        }
    case WM_CLOSE:
        DestroyWindow(hwnd);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, msg, wParam, lparam);
    }
    return 0;
}

//Main function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG msg;

    //Step-1: Registering the windows class.
    wc.cbSize       =   sizeof(WNDCLASSEX);
    wc.style        =   0;
    wc.lpfnWndProc  =   WndProc;
    wc.cbClsExtra   =   0;
    wc.cbWndExtra   =   0;
    wc.hInstance    =   hInstance;
    wc.hIcon        =   LoadIcon(NULL, IDI_ASTERISK);
    wc.hCursor      =   LoadCursor(NULL, IDC_HAND);
    wc.hbrBackground =  (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName =   NULL;
    wc.lpszClassName =  g_szClassName;
    wc.hIconSm      =   LoadIcon(NULL, IDI_APPLICATION);
    if (!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window registration failed.", "Error", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    //Step-2: Create the window
    hwnd = CreateWindowEx(WS_EX_ACCEPTFILES, g_szClassName, "My own private window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                          600, 420, NULL, NULL, hInstance, NULL);
    if (hwnd == NULL)
    {
        MessageBox(NULL, "Window registration failed.", "Error", MB_ICONEXCLAMATION | MB_OK);
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    //Step-3: The message loop
    while(GetMessage(&msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}
