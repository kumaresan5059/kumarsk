#include <stdio.h>
 
int main(void) {
	int a,b,c=1;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*b;
		a/=10;
	}
	printf("%d",c);
	return 0;
}
