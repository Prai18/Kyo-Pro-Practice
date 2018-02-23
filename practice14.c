#include <stdio.h>
char s[101];
int main(void){
	int i,count=0;
	scanf("%s",s);
	for(i=0;i<=100;i++){
		if(s[i]=='m'){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}