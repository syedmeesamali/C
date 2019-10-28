#include <stdio.h>
#include <string.h>

char tracks[][80] =
{
    "i left heart in the school",
    "hello hello can you hear me",
    "can't get you out of my head",
    "from here to maternity",
    "in the end it doesn't even matter",
};

void find_track(char search_for[])
{
    int i;
    for (i=0; i<5; i++)
    {
        if(strstr(tracks[i], search_for))
        {
            printf("Track %i: '%s' \n",i,tracks[i]);
        }
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
    return 0;
}
