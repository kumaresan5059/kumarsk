#include<stdio.h>
int main()
{
int h,m,h1,h2,m1,m2;
scanf("%d %d",&h1,&m1);
scanf("%d %d",&h2,&m2);
if(m1<m2)
{
m1=m1+60;
h1=h1-1;
}
h=h1-h2;
m=m1-m2;
printf("%d %d",h,m);
return 0;
}
