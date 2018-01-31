#include <stdio.h>

int main(void) {
	int a,b,i;
	scanf("%d",&a);
	for(i=a;i<10000;i++)
	{
		if(i%10==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
