#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char const *argv[])
{	
	int A[5],B[14];
	int three_card=0,pair=0;

	for (int i = 1; i <= 13; ++i)
	{
		B[i]=0;
	}

	for (int i = 1; i <= 5; ++i)
	{
		scanf("%d",&A[i]);
		B[A[i]]++;
	}

	for (int i = 1; i <= 13; ++i)
	{
		if(B[i]==3){
			three_card=1;
		}else if(B[i]==2){
			pair++;
		}
	}

	if(three_card==1 && pair==1){
		printf("FULL HOUSE\n");
	}else if(three_card==1){
		printf("THREE CARD\n");
	}else if(pair==2){
		printf("TWO PAIR\n");
	}else if(pair==1){
		printf("PAIR\n");
	}else{
		printf("NO HAND\n");
	}
	
	return 0;
}
