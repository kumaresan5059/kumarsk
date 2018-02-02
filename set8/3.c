#include <stdio.h>

int main(void) {
	int a,b,c,i,f=0;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the limits");
	scanf("%d%d",&b,&c);
	for(i=b;i<=c;i++)
	{
		if(a==i)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("\nYes");
	else
	printf("\nNo");
	return 0;
}
