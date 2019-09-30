#include<stdio.h>

int main()
{

    int size = 3;
    int input_array[size];
    int output_array[size];
    int i;
    printf("Enter the numbers : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&input_array[i]);
    }
    if (input_array[0] < input_array[1] && input_array[0] < input_array[2])
    {
        output_array[0]=input_array[0];
        if (input_array[1] < input_array[2])
        {
            output_array[1]=input_array[1];
            output_array[2]=input_array[2];
        }
        else
        {
            output_array[1]=input_array[2];
            output_array[2]=input_array[1];
        }
    }
    if (input_array[1] < input_array[0] && input_array[1] < input_array[0])
    {
        output_array[0]=input_array[1];
        if (input_array[0] < input_array[2])
        {
            output_array[1]=input_array[0];
            output_array[2]=input_array[2];
        }
        else
        {
            output_array[1]=input_array[2];
            output_array[2]=input_array[0];
        }
    }
    if (input_array[2] < input_array[0] && input_array[2] < input_array[1])
    {
        output_array[0]=input_array[2];
        if (input_array[0] < input_array[1])
        {
            output_array[1]=input_array[0];
            output_array[2]=input_array[1];
        }
        else
        {
            output_array[1]=input_array[1];
            output_array[2]=input_array[0];
        }
    }
    printf("Output array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ", output_array[i]);
    }
}
