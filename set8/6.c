#include <stdio.h>
 
int main(void) {
int a,i,f=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
	if(a%i==0){
		f=1;
		break;
	}
}
if(f==1)
printf("Composite");
else
printf("No");
	return 0;
}
