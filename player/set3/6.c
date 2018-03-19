#include <stdio.h>

int main() {
	char a[50];
	int i,j=0;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ' && j==1)
		a[i]='-';
	        if(a[i]==' ')
		j=1;
	}
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]!='-')
		printf("%c",a[i]);
	}
	return 0;
}
