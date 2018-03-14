#include <stdio.h>
#include<string.h>
int main(void) {
int n,i,l,k=0,j,m,e=612;
char a[10][25];
scanf("%d",&n);
printf("%d",i);
for(i=0;i<n;i++)
{
	scanf("%s",a[i]);}
for(i=0;i<n;i++)
{	m=0;
	l=strlen(a[i]);
	for(j=0;j<l;j++)
	{
	m=m+a[i][j];	
	}
	if(m==e)
	k+=1;
}
printf("%d",k);
	return 0;
}
