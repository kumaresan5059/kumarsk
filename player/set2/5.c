#include <stdio.h>

int main()
{
 char a[100],ch;
 int max,cnt,i,j;
 scanf("%[^\n]s",a);
 for(i=0;a[i]!=NULL;i++)
 {
     for(j=i+1;a[j]!=NULL;j++)
     {
         if(a[i]==a[j])
         {
             cnt++;
         
             if(cnt>max)
             {
                 max=cnt;
                 ch=a[i];
             }
         }
     }
 }
printf("%c",ch);
    return 0;
}
