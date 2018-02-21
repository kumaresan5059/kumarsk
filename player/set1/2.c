#include<stdio.h>
int main()
{
	int n,k,fact=1;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		fact=fact*k;
	}
	printf("%d",fact);
	return 0;
}
