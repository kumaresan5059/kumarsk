
#include<stdio.h>
int main()
{
int t=0;
int min=0;
int hour=0;
scanf("%d",&t);
min=t%60;
hour=(t-min)/60;
printf("%d %d ",hour,min);
}
