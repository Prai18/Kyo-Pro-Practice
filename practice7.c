#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char const *argv[])
{	
	int K;
	int N;
	int F;
	int Af[F];

	int sum_bean;
	int sum_age;


	printf("一袋何粒ですか？\n");
	printf("何袋ですか？\n");
	printf("何人家族ですか？\n");
	scanf("%d %d %d",&K,&N,&F);
	printf("それぞれの年齢は？\n");

	for (int i = 0; i < F; ++i)
	{
		scanf("%d",&Af[i]);
	}

	sum_bean=K*N;
	for (int i = 0; i < F; ++i)
	{
		sum_age+=Af[i];
	}

	if(sum_bean/sum_age>0){
		sum_bean-=sum_age;
		printf("%d\n",sum_bean);
	}else{
		printf("-1\n");
	}


	return 0;
}
