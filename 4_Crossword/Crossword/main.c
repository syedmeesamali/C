#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m = 0;
    int n = 0;
    char matrix[11][11] ={"A L O V E M",
                          "K G I V E P",
                          "A F S W G Q",
                          "N R I U C S",
                          "O L K O D T",
                          "Z L I L E M",
                          };
    //Below is a list to be searched within main cross-board letters
    char search[4] ={"LOVE",
                      "ISI",
                      "GIVE",
                      "NO",
                      };
    for (m=0; m<11; m++)
    {
        for (n=0; n<11; n++)
        {
            printf("%c", matrix[m][n]);
        }
        printf("\n");
    }
    return 0;
}
