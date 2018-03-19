#include <stdio.h>
#include<string.h>
int main() {
	char a[50];
	int i,j;
	scanf("%s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(a[i] >= 97 && a[i] <=122)
		a[i]=a[i]-32;
		else
		 a[i]=a[i]+32;
	
	}
		printf("%s",a);
	return 0;
}
