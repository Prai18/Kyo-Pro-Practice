#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    if(b%a){
        printf("NO\n");
        return 0;
    }
    printf("%d",b/a);
    return 0;
}