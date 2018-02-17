#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char const *argv[])
{	
	int N;
	int count;
	int pow=1;

	printf("Saraが食べたいビスケットの数は？\n");
	scanf("%d",&N);

	while(N>pow){
		pow*=2;
		count++;
	}
	printf("%d\n",count);

	return 0;
}
