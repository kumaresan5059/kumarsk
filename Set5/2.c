#include<stdio.h>
#include<string.h>
int main(void)
{
int l1,l2,i,j;
char a[100],b[100];
scanf("%s",a);
scanf("%s",b);
l1=strlen(a);
l2=strlen(b);
if(l1>l2)
printf("%s",a);
else if(l1<l2)
printf("%s",b);
else
printf("%s",a);printf(" %s",b);

return 0;
}
