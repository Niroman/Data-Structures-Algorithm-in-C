#include <stdio.h>
#include <stdlib.h>
int main()
{
  char input_a[20];
  char input_b[20];
  int *input_A, *input_B, *output, *temp_input_B;
  input_A=(int*)malloc(10*sizeof(int));
  temp_input_B=(int*)malloc(10*sizeof(int));
  input_B=(int*)malloc(10*sizeof(int));
  output=(int*)malloc(10*sizeof(int));
  int j,i;
  int temp=0;
  int temp1=0;
  int count=0;
  int count1=0;
  int temp_count1=0;
  int output_count=0;
  int a = 0;
  int b = 0;
  int t_b = 0;
  int r = 0;
  int l =0;
  int o =0;
  printf("Enter the values of Input array A \n");
  for(j=0;j<20;j++)
  {
    scanf("%[^\n]",&input_a);
  }
  printf("Enter the values of Input array B \n");
  getchar();
  for(j=0;j<20;j++)
  {
    scanf("%[^\n]",&input_b);
  }
  for(j=0;j<10;j++)
  {
    temp = input_a[j]-48;
    if (temp>0)
    {
      input_A[a]= temp;
      count = count + 1;
      a = a + 1;
    }
  }
  a = a -1;
  count = count - 1;
  for(j=0;j<10;j++)
  {
    temp1 = input_b[j]-48;
    if(temp1 > 0 && temp1 < 10)
    {
      temp_input_B[b] = temp1;
      count1 = count1 + 1;
      b = b + 1;
    }
  }
  b = b -1;
  count1 = count1 - 1;
  temp_count1=count1;
  for(i=0;i<=count1;i++)
  {
    t_b = temp_count1;
    input_B[i] = temp_input_B[t_b];
    temp_count1 = temp_count1 - 1;
  }
  while(r <= count && l <= count1)
  {
    if(input_A[r] <= input_B[l])
    {
      output[o] = input_A[r];
      r++;
      o++;
      if(r == count && r > l && l == count1)
      {
        if(input_A[r] == input_A[r+1])
        {
          output[o] = input_A[r];
          o++;
          output[o] = input_A[r+1];
        }
        else
        {
          output[o] = input_B[l];
          o++;
          output[o] = input_A[r];
          break;
        }

      }
    }
    else
    {
      output[o] = input_B[l];
      l++;
      o++;
      if(l == count1 && l > r && r == count)
      {
        if(input_B[l] == input_B[l+1])
        {
          output[o] = input_B[l];
          o++;
          output[o] = input_B[l+1];
        }
        else
        {
          output[o] = input_A[r];
          o++;
          output[o] = input_B[l];
          break;
        }

      }
    }
  }
  printf("\n");
  for(i=0;i<=o;i++)
  {
    printf("%d ",output[i]);
  }
  return 0;
}
