#include <stdio.h>

int main(void) {
	int a,b[a],i,n;
	scanf("%d",&a);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("%d",b[n]);
	return 0;
}
