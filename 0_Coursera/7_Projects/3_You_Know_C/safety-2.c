#include<stdio.h>
#include<stdlib.h>

#define UNIX
//System checks - Very dangerous territory
int main(void)
{
   puts("Calling the system...Will issue 'ls' command if UNIX");
#ifdef UNIX
    system("ls");
#endif
#ifdef WINDOWS
    system("dir");
#endif
    puts("\nAll done now!");
    return 0;
}
