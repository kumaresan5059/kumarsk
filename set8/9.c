#include <stdio.h>

int main(void) {
int a,b,c;
scanf("%d%d",&a,&b);
c=a*b;
if(c/a==b)
printf("Yes");
else
printf("No");
	return 0;
}
