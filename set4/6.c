#include<stdio.h>
int main()
{
	char a[1000];
	int b=0,c=0,i;
	gets(a);
	for(i=0;a[i]!=NULL;)
	{
		if((a[i]>='0')&&(a[i]<='9'))
i++;
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
i++;
else{
b=++c;
i++;}
		
	}
	printf("%d",b);
	return 0;
}
