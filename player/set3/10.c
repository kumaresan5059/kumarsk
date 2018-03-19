#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b[25];
  int i,k,n1,n2,n,c=0;
  scanf("%s%s",a,b);
  scanf("%d",&k);
  n1=strlen(a);
  n2=strlen(b);
  if(n1>n2)  n=n1;
  else  n=n2;
  for(i=0;i<n;i++)
  {
      if(a[i]!=b[i])
      c++;
  }
  if(c==k)
  printf("Yes");
  else
  printf("No");
  return 0;
}
