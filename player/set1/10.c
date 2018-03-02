#include <stdio.h>
#include<string.h>
int main() {
	char a[10],b[10];
	int i=0,c=0,n1,n2;
	scanf("%s%s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1==n2)
	{
		while(i<n1)
		{
			if(a[i]==b[i])
			i++;
			else
			{
				c++;
				i++;
			}
		}
	}
	if(c==1)
	printf("YES");
	else
	printf("NO");
	return 0;
}
