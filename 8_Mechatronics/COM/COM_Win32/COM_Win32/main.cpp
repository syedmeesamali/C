#include <tchar.h>
#include <windows.h>
#include <stdio.h>

int CDECL MessageBoxPrintf(TCHAR *szCaption, TCHAR *szFormat, ...)
{
    TCHAR szBuffer[1024];
    va_list pArgList;
    va_start (pArgList, szFormat);
    _vsnprintf(szBuffer, sizeof(szBuffer) / sizeof(TCHAR), szFormat, pArgList);
    va_end(pArgList);
    return MessageBox(NULL, szBuffer, szCaption, 0);
}

//Main windows related
int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     PSTR lpszArgument,
                     int nCmdShow)
{
    int cxScreen, cyScreen;
    cxScreen = GetSystemMetrics(SM_CXSCREEN);
    cyScreen = GetSystemMetrics(SM_CYSCREEN);
    MessageBoxPrintf(TEXT("Screen Size for the Computer!"),
                     TEXT("The screen is %i pixels wide and by %i pixels high."),
                     cxScreen, cyScreen);
    return 0;
}
