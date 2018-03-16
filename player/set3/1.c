#include <stdio.h>
 
 int main()
{
    int x1, x2, x3, y1, y2, y3;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);
    if ((y3 - y2)/(y2 - y1) == (x3 - x2)/(x2 - x1))
        printf("Yes");
    else
        printf("No");
    return 0;
}
