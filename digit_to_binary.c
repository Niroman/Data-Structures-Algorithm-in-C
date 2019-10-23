#include <stdio.h>
#include<stdlib.h>
int main()
{
  int i=0;
  int j=0;
  int res = 0;
  int remind = 0;
  int *reverse_arr = (int*) malloc(120*sizeof(int));
  int count=0;

  for (; i<20; i++)
  {
    res = i*i;
    printf("%d: ", i*i);
    while (res>0)
    {
        remind = res%2;
        reverse_arr[count] = remind;
        count+=1;
        res = res/2;
    }
    for(j=count-1;j>=0;j--)
    {
        printf("%d",reverse_arr[j]);
    }
    count = 0;
    printf("\n");
  }
  return 0;
}
