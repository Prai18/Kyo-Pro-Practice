#include <stdio.h>

int main(){
    int i;
    int n = 1;
    char s[31];				//char s[] = "RLLRLRLRRRLRL";
    scanf("%s", s);

    if(s[0] != 'R' && s[0] != 'L'){
        puts("1");
        return 0;
    }

    for(i = 0; i < 30; ++i){
        if(s[i] == 'L') n *= 2;
        else if(s[i] == 'R') n = n*2 + 1;
        else break;
    }
    printf("%d\n", n);
    return 0;
}
