#include<stdio.h>
int main()
{
int a,b,t,c=0;
scanf("%d",&a);
t=a;
while(a!=0)
{
b=a%10;
c=c*10+b;
a=a/10;
}
if(c==t)
printf("Yes");
else
printfprintf(" No");
}
