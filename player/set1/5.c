#include <stdio.h>
#include <string.h>
int main()
{
   char c[6];
   int a[30], n, i,s=0;
   scanf("%s",c);
   n =strlen(c);
   for(i = 0; i < n; i++)
   {
      switch (c[i])
      {
     case 'I':  a[i] = 1;
     s=a[i]+s;
            break;
     case 'V':  a[i] = 5;
            s=s+a[i];
            break;
     case 'X':  a[i] = 10;
            s=a[i]+s;
     		break;
      }
   }
   printf("%d", s);
   return 0;
}
