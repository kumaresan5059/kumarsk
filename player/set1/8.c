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
	for(i=0;i<n;i++)
	{
		if(a[i]<='0'&&a[i]>=9)
		f=1;}
	if(f==1)
		printf("error");
	else
	puts(a);
	return 0;
}
