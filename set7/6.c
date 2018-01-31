#include<stdio.h>
int main()
{
  int a,i,f=1;
  scanf("%d",&a);
  for(i=2;i<=a/2;i++)
  {
    if(a%i==0)
    {
   
    	f=0;
    	break;
    }
    
  }
  if(f==1)
  printf("Yes");
  else
  printf("No");
  return 0;

}
