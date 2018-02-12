#include <stdio.h>
int main(void) {
int n,m,i,flag=0;
scanf("%d %d",&n,&m);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==m)
{
printf("yes");
flag=1;
break;
}
}
if(flag==0)
{
printf("no");
}
return 0;
}
