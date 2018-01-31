#include<stdio.h>
int main()
{
int n,c=0,x=1,p=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<=c;i++)
{
x=x*p;
}
printf("%d",x);
}
