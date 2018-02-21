#include <stdio.h>
#include<string.h>
int main() {
	char a[100];
	int n;
	scanf("%s",a);
	n=strlen(a);
	a[n]='.';
	printf("%s",a);
	return 0;
}
