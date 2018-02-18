#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char const *argv[])
{	
	int x;
	printf("xの値は？\n");
	scanf("%d",&x);

	if(x==0){
		printf("1\n");
	}else if(x==1){
		printf("0\n");
	}else{
		printf("error\n");
	}

return 0;
}
