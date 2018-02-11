#include<stdio.h>

int main(int argc, char const *argv[])
{
	int N;

	printf("Nの値を入力してください\n");
	scanf("%d",&N);

	for(int i=0;i<N;i++){
		// printf("%d回目\t",i);			// \tはタブ

		for(int j=0;j<N-i;j++){
			printf("%d",N);
		}
		printf("\n");
	}
	return 0;
}