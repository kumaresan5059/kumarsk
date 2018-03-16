#include <stdio.h>

int main(void) {
	int a,i,j,f;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		f=0;
	if(a%i==0)
	{
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
			}
		if(f==0)
			printf("%d ",i);
	
	}}
	return 0;
}
