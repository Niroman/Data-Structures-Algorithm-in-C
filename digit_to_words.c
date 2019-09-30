#include <stdio.h>
int main()
{
    int input_digit,int_tmp,int_tmp2,tmp,tmp1;
    int count=0;
    int i,j;
    printf("Enter the input digit : ");
    scanf("%d",&input_digit); //384205
    int_tmp = input_digit;
    int_tmp2 = input_digit;
    while(int_tmp != 0)
    {
        int_tmp=int_tmp/10;
        count = count + 1;
    }
    int reverse_digit[count];
    tmp1=count;
    while(int_tmp2!=0)
    {
        tmp = int_tmp2 % 10;
        reverse_digit[tmp1-1] = tmp;
        tmp1 =tmp1 - 1;
        int_tmp2 = int_tmp2 /10;

    }
    char *output_words[count];
    char *digit_to_numbers[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(i=0;i<count;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(reverse_digit[i] == j)
            {
                output_words[i] = digit_to_numbers[j];
            }
        }
    }
    printf("The converted digits to words are : ");
    for(i=0;i<count;i++)
    {
        printf("%s ", output_words[i]);
    }
}
