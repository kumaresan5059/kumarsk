#include<stdio.h>
int main()
{
int a,b=0;
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++b;
}
printf("%d",b);
}




