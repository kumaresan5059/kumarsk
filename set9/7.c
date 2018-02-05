#include <stdio.h>
 
int main(void) {
int a,i,c;
scanf("%d",&a);
for(i=1;i<a;i++)
{
	if(a%i==0)
	{
		c=i;
	}
}
printf("%d",c);
	return 0;
}
