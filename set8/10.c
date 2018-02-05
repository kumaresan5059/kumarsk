#include <stdio.h>

int main(void) {
int a,b;
scanf("%d",&a);
while(a!=0)
{
	b=a%10;
	if(b%2!=0){
	printf("%d ",b);
	}
	a=a/10;
}
	return 0;
}
