#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,n;
   char s[10][25],temp[25];
   scanf("%d",&n);
   for(i=0;i<=n;i++)
      gets(s[i]);
   for(i=0;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
         if(strcmp(s[i],s[j])>0)
         {
            strcpy(temp,s[i]);
            strcpy(s[i],s[j]);
            strcpy(s[j],temp);
         }
      }
   }
   for(i=0;i<=n;i++)
      puts(s[i]);
   return 0;
}
