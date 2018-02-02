#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int i, l;
    int f = 0;
    
    printf("Enter a string:");
    scanf("%s", str);
    
    l = strlen(str);
    
    for(i=0;i < l ;i++){
        if(str[i] != str[l-i-1]){
            f = 1;
            break;
   }
}
    
    if (f==1) {
        printf("%s is not a palindrome", str);
    }    
    else {
        printf("%s is a palindrome", str);
    }
    return 0;
}
