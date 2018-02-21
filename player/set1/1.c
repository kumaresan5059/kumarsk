#include <stdio.h>
#include<string.h>
int main() {
	char chr[20];
	int i,n;
	scanf("%s",chr);
	n=strlen(chr);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",chr[i]);
	}
	return 0;
}
