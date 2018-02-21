#include <stdio.h>
int main(void){
	int dead1,dead2,dead3,sum,survived;
	scanf("%d%d%d%d",&dead1,&dead2,&dead3,&survived);
	sum=dead1+dead2+dead3;
	if(survived==1){
		printf("SURVIVED");
	}else if(sum<2){
		printf("SURVIVED");
	}else{
		printf("DEAD");
	}
	return 0;
}