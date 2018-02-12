#include <stdio.h>

int main(void) {
	int n,a[20],k,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			if(i==k)
			{
				if((a[i]%2)!=0)
				{
					printf("%d",a[i]);
				}
				else
				{
					printf("It is not odd number");
				}
			}
		}
		
	return 0;
}
