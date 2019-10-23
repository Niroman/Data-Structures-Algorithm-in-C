#include <stdio.h>

void swap(int *a,int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;

}
int main()
{
  int a = 100;
  int b = 200;
  printf(" a = %d",a);
  printf(" b = %d",b);
  swap(&a,&b);

  printf(" a = %d",a);
  printf(" b = %d",b);

}
