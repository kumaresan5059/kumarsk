#include <stdio.h>

int main(void) {
	int a,b,i,j,c=1,f=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%2==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			c++;
	}
	printf("%d",c);
	return 0;
}
