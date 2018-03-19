#include<stdio.h>
int main()
{
	int a,b,c=0,i,j;
scanf("%d",&a);
scanf("%d",&b);
for (i=a+1;i<b;i++)
{
for(j=1;j<=i;j++)
{ if(j*j==i)
c++;
}
}
printf("%d",c);
return 0;
}
