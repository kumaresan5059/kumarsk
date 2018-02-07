#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,j,t,b;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {   if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
}
