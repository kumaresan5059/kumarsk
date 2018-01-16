#include<stdio.h>
int main()
{
int a,f=1,i;
scanf("%d",&a);
if(a>0)
{
for(i=1;i<=a;i++)
{
f=f*i;
}
printf("%d",f);
}
return 0;
}
