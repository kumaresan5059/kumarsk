#include<stdio.h>
int main()
{
	int a,b,r=0;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		r=r*10+b;
		a=a/10;
	}
	a=r;
	while(a!=0)
	{
		b=a%10;
		printf("%d ",b);
		a=a/10;
	}
}
