#include <stdio.h>
#include<string.h>
int main(void) {
	char a[30],t;
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
		
		i++;
	}
	printf("%s",a);
	return 0;
}
