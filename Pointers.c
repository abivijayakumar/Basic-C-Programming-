#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 5,b= 10;
int *p = &a;
*p = b;
printf("%d%d",a,b);
return 0;
}
