#include <stdio.h>

//Function to modify array
void modify_array(float *local_array)
{
    local_array[2] = 3.5;
    return;
}


//Main function
int main()
{
    float orig_array[] = {5, 6, 7, 8};
    for (int i=0; i<4; i++)
    {
        printf("Element %d of original array is %f \n", i, orig_array[i]);
    }
    modify_array(orig_array);
    for (int i=0; i<4; i++)
    {
        printf("Element %d of changed array is %f \n", i, orig_array[i]);
    }
    return 0;
}
