#include <stdio.h>

int main(void) {
	int a,d,n,i,t;
	scanf("%d %d%d",&a,&d,&n);
for(i = 0; i < n; i++) {
      
        t += a;
        a = a + d;
    }
	printf("%d",t);
	return 0;
}
