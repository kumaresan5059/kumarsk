#include <stdio.h>

int main() {
	int a,s,t=0;
	scanf("%d",&a);
	while(a!=0)
	{
		s=a%10;
	t=t+s;
	a/=10;
	}
	printf("%d",t);
	return 0;
}
