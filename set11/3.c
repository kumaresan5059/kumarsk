#include <stdio.h>

int main(void) {
	int i;
	char s[100];
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(i==0 )
		{
			if(s[i]>='a' && s[i]<='z')
			{
				s[i]=s[i]-32;
				
			}
		}
	          if(s[i]==' ')
		{
			++i;
			if(s[i]>='a' && s[i]<='z')
			{
				s[i]=s[i]-32;
			}
		}
	}
	printf("%s",s);
	return 0;
}
