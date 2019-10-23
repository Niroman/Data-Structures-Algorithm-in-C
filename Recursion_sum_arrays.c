#include <stdio.h>

int foo (int A[], int n)
{
  if (n<=0)
    return 0;
  return (A[n-1]+foo(A,n-1));
}
int main()
{ int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i = sizeof(A)/sizeof(A[0]);
  int result = 0;
  result = foo(A,i);
  printf("sum of the first numbers: %d ",result);
  return 0;
}
