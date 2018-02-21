#include <stdio.h>
 
int main(void) {
	int a,r,d;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		d=d*10+r;
		a/=10;
	}
	printf("%d",d);
	return 0;
}
 
