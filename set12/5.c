#include <stdio.h>

int main(void) {
	int n,a[20],k,i,t,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		{
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[i])
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}}
	printf("%d",a[k]);	
	return 0;
}
