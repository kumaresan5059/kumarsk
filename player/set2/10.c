#include <stdio.h>
int main() {
	char a[100];
	int u,v,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='V')
		{
			v=a[i];
			a[i]=v+3;
		}
		else
		{
			v=a[i];
			a[i]=v-23;
		}
	}
	printf("%s",a);
	return 0;
}
