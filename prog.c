#include <stdio.h>

int max(int a, int b)
{
  int c = a;
  if(a<b) { c = b; }
  return c;
}

int f(int x)
{
  return 2*x+max(x+4,2*x)/(5-x);
}

int main()
{
  printf("f(%d)=%d\n",3,f(3));
  printf("f(%d)=%d\n",5,f(5));
  return 0;	
}
