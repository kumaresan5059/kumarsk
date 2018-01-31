#include <stdio.h>

int main(void) {
char a[100];
int b,i;
scanf("%s",a);
scanf("%d",&b);
for(i=0;i<b;i++)
{
	printf("%c",a[i]);
}
	return 0;
}
