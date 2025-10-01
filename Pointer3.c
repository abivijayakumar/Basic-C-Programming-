#include<stdio.h>
int main()
{
  int x = 100;
int *p = &x;
int ** q = &p;
printf("%d",**q);
return 0;
}
