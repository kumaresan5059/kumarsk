#include <stdio.h>

int main(void) {
int i,a[10],min,t;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
	if(i==0){
		min=a[i];
	}
	if(a[i]<min)
	{
		t=a[i];
		a[i]=min;
		min=t;
	}
}
printf("%d",min);
	return 0;
}
