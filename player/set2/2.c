#include<stdio.h>
int main()
{
	int a[100],i,n,k,j,m;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	    m=a[n-1];
		for(j=n-1;j>=1;j--)
		{
		a[j]=a[j-1];
	    }
	    a[0]=m;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
  return 0;
}
