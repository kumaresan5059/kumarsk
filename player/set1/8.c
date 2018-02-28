#include <stdio.h>
#include<string.h>
int main(void) {
	char a[200];
	int i,n;
	scanf("%[^\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		

		if(i==0)
		{
			if(( a[i] >= 'a') && (a[i] <= 'z'))
			a[i]=a[i]-32;
		}
		if(a[i]==' ')
		{
		a[i+1]=a[i+1]-32;
		}
	}
	puts(a);
	return 0;
}
