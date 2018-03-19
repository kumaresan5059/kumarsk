#include <stdio.h>
#include<string.h>
int main() {
	char a[50];
	int i,j;
	scanf("%[^\n]s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(a[i]!=' ')
		 printf("%c",a[i]);
	}
	return 0;
}
