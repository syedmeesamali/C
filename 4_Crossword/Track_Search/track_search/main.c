#include <stdio.h>
#include <string.h>

char tracks[5][80] = {
    "I left my heart in Ibiza",
    "Take me back to London",
    "This love is on fire",
    "Can't take it anymore",
    "In the end it doesn't even matter",
    };

void find_track(char search_for[])
{
    int i;
    for (i=0; i<5; i++)
    {
        if(strstr(tracks[i], search_for))
        {
            printf("Found Track # %d: %s", i, tracks[i]);
        }
    }
} //End of find-track function

int main()
{
    char search[80];
    printf("Search for: ");
    fgets(search, 80, stdin);
    strtok(search, "\n");
    find_track(search);
    return 0;
}
