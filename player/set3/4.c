#include <stdio.h>

int main(void) {
	char a[100];
	int i,f=0;
	scanf("%s",a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='a'&&a[i]<='z' || a[i]>='A'&&a[i]<='Z')
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("NO");
	else
	printf("YES");
	return 0;
}
