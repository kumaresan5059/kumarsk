#include <stdio.h>

int main(void) {
	int a,b,s,i;
	scanf("%d %d",&a,&b);
	for(i=2;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			s=i;
		}
	}
	printf("%d",s);
	return 0;
}
