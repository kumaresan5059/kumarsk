#include<stdio.h>
int main()
{
	int n,a,d,i,sum=0;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+d;

	}
	printf("%d",sum);
}
