#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int A,B;

	printf("Aの値を入力してください\n");
	scanf("%d",&A);

	printf("Bの値を入力してください\n");
	scanf("%d",&B);


	for(int i=A;i<=B;i++){
		if(i%3==0 || i%10==3 || i/10==3){
			printf("%d\n",i);
		}
	}
	return 0;
}