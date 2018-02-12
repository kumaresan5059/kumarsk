#include <stdio.h>

int main(void) {
	int n,a[20],k,i,c=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				++c;
			}
		}
		printf("%d",c);
	return 0;
}
