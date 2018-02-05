#include <stdio.h>

int main(void) {
int a[100],b[100],i;
char c[100];
for(i=0;i<100;i++)
{
	scanf("%d%c%d",&a[i],&c[i],&b[i]);
}
for(i=0;a[i]!=NULL;i++)
{
	if(c[i]=='/')
	{
		printf("%d\n",a[i]/b[i]);
	}
	if(c[i]=='%')
	{
		printf("%d\n",a[i]%b[i]);
	}
}
	return 0;
}
