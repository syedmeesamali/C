#include <stdio.h>
void msg_read(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("Message occupies %i bytes\n", sizeof(msg));
}

int main()
{
    char quote[] = "This is a message";
    printf("The quote is stored at: %p\n", quote);
    msg_read(quote);
    return 0;
}
