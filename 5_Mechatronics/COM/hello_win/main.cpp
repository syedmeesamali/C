#include <windows.h>
LRESULT CALLBACK WNDPROC(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   PSTR szCmdLine, int iCmdShow)
{
    static TCHAR szAppName[] = TEXT("Hello Win");
    HWND hWnd;
    MSG msg;
    WNDCLASS wndClass;
    wndClass.style = CS_HREDRAW | CS_VREDRAW;
}
