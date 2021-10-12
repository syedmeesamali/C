#include<windows.h>
#include<stdio.h>
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
 	wchar_t b[] = L"wide-char";
	wchar_t b_cap[] = L"Wide";
	MessageBoxW(NULL, b, b_cap, MB_OK);
	HANDLE hComm;
    hComm = CreateFileA("\\\\.\\COM4", GENERIC_READ | GENERIC_WRITE,
                        0,                      //No sharing
                        NULL,                   //No security
                        OPEN_EXISTING,          //Open existing ports only
                        0,                      //Non overlapped IO
                        NULL);                  //Null for comm devices
    if (hComm == INVALID_HANDLE_VALUE)
    {
        printf("Error in opening serial port!");
    } else
    {
        printf("Port opened successfully!");
    }

    Status = WriteFile(hComm,               //Handle to serial port
                       lpBuffer,            //Data to be written at port
                       dNoOFBytestoWrite,   //Bytes to be written
                       &dNoOfBytesWritten,  //Bytes actually written
                       NULL)

    CloseHandle(hComm);     //Close the serial port
    return 0;
}
