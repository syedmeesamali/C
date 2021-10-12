#include<stdio.h>
#include<math.h>

#define vect_size 5
//Function to modify array
void modify_array(float *local_array)
{
    local_array[0] = 2.5;
    local_array[1] = 3.5;
    local_array[2] = 4.5;
    local_array[3] = 5.5;
    return;
}

float get_sign(float in_num)
{
    return sin(in_num);
}

//Main function
int main()
{
    float orig_array[vect_size] = {5, 6, 7, 8, 9};
    float num1 = 45;
    for (int i=0; i<5; i++)
    {
        printf("Element %d of original array is %f \n", i, orig_array[i]);
    }
    modify_array(orig_array);
    for (int i=0; i<5; i++)
    {
        printf("Element %d of changed array is %f \n", i, orig_array[i]);
    }
    printf("Sine of angle %f is %f \n", num1, get_sign(num1));
    return 0;

}
