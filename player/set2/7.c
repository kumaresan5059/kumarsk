#include <stdio.h>

int main(void) {
int a,b,i,l;
long int t=100000;
scanf("%d%d",&a,&b);
if(a>b)
l=a;
else
l=b;
for(i=l;i<t;i++)
{
	if((i%a==0) && (i%b==0))
	{
		printf("%d",i);
		break;
	}
}
	return 0;
}
