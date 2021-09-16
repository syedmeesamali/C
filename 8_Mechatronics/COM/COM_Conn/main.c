#include<windows.h>
#include<stdio.h>

int main()
{
    HANDLE hComm;
    hComm = CreateFileA("\\\\.\\COM3", GENERIC_READ | GENERIC_WRITE,
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
    CloseHandle(hComm);     //Close the serial port
    return 0;
}
