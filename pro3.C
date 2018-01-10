#include <stdio.h>

int main(void) {
	char word;
	char a[10]={'A','a','E','e','I','i','O','o','U','u'};
	int t,p=0;
	scanf("%c",&word);
	for(t=0;t<=9;t++)
	{
		if(word==a[t])
	{
		p=2;
		break;
	}
	
		if(word|=a[t])
		
			p=1;
		}
		if(p==2)
		printf("Vowel");
		if(p==1)
	printf("Consonant");
	return 0;
}
