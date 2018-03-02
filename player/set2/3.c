#include <stdio.h>
 
int main() {
	int a,r,t;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		t=t+r*r;
		a/=10;
	}
	printf("%d",t);
	return 0;
}
