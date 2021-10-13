#ifndef UNICODE
#define UNICODE
#endif
#include <windows.h>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
const wchar_t szClassName[] = L"Simple Windows Program"; /*  Make the class name into a global variable  */
int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow)
/*hInstance is something called a "handle to an instance" or "handle to a module."
The operating system uses this value to identify the executable (EXE) when it is loaded in memory. */
//hPrevInstance has no meaning. It was used in 16-bit Windows, but is now always zero.

{
    WNDCLASS winc = { };          /* Data structure for the windowclass */
    winc.hInstance = hThisInstance;
    winc.lpszClassName = szClassName;
    winc.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    winc.style = CS_DBLCLKS;                 /* Catch double-clicks */

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClass (&winc))
        return 0;

    /* The class is registered, let's create the program*/
    HWND hwnd = CreateWindowEx (
           0,                           /* Extended possibilities for variation */
           szClassName,                 /* Classname */
           L"Template Windows App",     /* Title Text */
           WS_OVERLAPPEDWINDOW,         /* default window */
           CW_USEDEFAULT, CW_USEDEFAULT,
           600,                         /* The programs width */
           400,                         /* and height in pixels */
           NULL,
           NULL,                        /* No menu */
           hThisInstance,               /* Program Instance handler */
           NULL                         /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);
    UpdateWindow(hwnd);
    /* Run the message loop. It will run until GetMessage() returns 0 */
    MSG msg = { };
    while (GetMessage (&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

/*  This function is called by the Windows function DispatchMessage()  */
LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    HDC             hdc;
    PAINTSTRUCT     ps;
    RECT            rect;

    switch (message)                  /* handle the messages */
    {
    //Paint the whole windows to screen
    case WM_CREATE:     //As of now nothing particular here
        return 0;
    case WM_PAINT:
        hdc = BeginPaint(hwnd, &ps); //ps is a pointer to struct called as PAINTSTRUCT
        GetClientRect(hwnd, &rect);
        DrawText(hdc, TEXT("Hello windows GUI again!"), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
        EndPaint(hwnd, &ps);
        break;
    //When close button is pressed - destroy the shown windows
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    default:                      /* for messages that we don't deal with */
        return DefWindowProc (hwnd, message, wParam, lParam);
    }
    return 0;
}
