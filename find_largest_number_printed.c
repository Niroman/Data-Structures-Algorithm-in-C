#include <stdio.h>

int main()
{
  int A[10] = {1, -2, -3, -4, -5, -6, -7, -8, 9, 10};
  int result = 0;
  int i =0;
  for ( i=1; i<=10 ; i++)
    if (A[i-1] < A[i])
    {
      result = A[i-1];
      printf("largest in the first numbers: %d\n", result);
    }
    else
    {
      printf("%d",i);
    }
  return 0;
}

/*
int foo(int A[], int n)
{
  int res;
  if (n == 1)
    res = A[0];
  else
    if (A[n-1] < foo(A, n-1))
      res = foo(A, n-1);
    else res = A[n-1];
  return res;
}
*/
