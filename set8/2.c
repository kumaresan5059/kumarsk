#include <stdio.h>

int main(void) {
	char a[10]={'a','e','i','o','u','A','E','I','O','U'},b[20];
	int i,j,f=0;
	scanf("%s",b);
	for(i=0;b[i]!=NULL;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]==b[i])
			{
			f=1;
				break;
			}
		}
	}
	if(f==1)
	printf("YEs");
	else
	printf("No");
	return 0;
}
