#include <stdio.h>

int main(void) {
	int a[10],i,max=0,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
