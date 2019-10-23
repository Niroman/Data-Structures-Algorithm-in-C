#include <stdio.h>

void foo(int n)
{ if (n > 0)
  { foo (n/2);
    printf("%d", n%2);
  }
}

int main()
{ int i=0;

  for (; i<10; i++)
  { printf("%d: ", i*i);
    foo(i*i);
    printf("\n");
  }

  return 0;
}
