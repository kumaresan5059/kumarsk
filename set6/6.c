#include <stdio.h>

int main() {
	char a[100];
	int i,f=0;
	gets(a);
	for(i=0;i<100;i++)
	{
	if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))&&(a[i]>='0' && a[i]<='9'))
		{
			
		f=1;
		break;
	}}
	if(f==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
