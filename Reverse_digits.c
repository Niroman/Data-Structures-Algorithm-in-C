#include<stdio.h>
int main()
{
    int input_digit;
    int i;
    scanf("%d",&input_digit);
    int temp;
    while(input_digit!=0)
    {
        temp = input_digit % 10;
        printf("%d ",temp);
        input_digit = input_digit /10;
    }
}
