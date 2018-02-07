#include <stdio.h>

int main(void) {

char a[100];
int n,i;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>=48&&a[i]<=57)
	
		printf("%c",a[i]);

}
	return 0;
}
