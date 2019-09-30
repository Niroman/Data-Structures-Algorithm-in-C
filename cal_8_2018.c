#include <stdio.h>

int main()
{
    char *days[]={"Su","Mo","Tu","We","Th","Fr","Sa"};
    int date[31];
    int i,j;
    int count=1;
    for(i=1;i<=31;i++)
    {
        date[i]=i;
    }
    printf("    August 2018 \n");
    for(i=0;i<=6;i++)
    {
        printf("%s ",days[i]);
    }
    printf("\n");
    for(i=1;i<=4;i++)
        {
            if (i== 1)
            {
                printf("         ");
                printf("%d  ",date[i]);
            }
            else
            {
                printf("%d  ",date[i]);
            }
        }
    printf("\n");
    for(j=5;j<=31;j++)
    {

        if(j<10)
        {
            printf("%d  ",date[j]);
        }
        else
        {
            printf("%d ",date[j]);
        }
        if(count == 7)
        {
            printf("\n");
            count = 0;
        }
        count = count + 1;
    }
}
