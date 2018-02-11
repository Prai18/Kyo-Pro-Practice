#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int a;				//歩幅
	int b;				//区間

	int WalkCount=0;	//歩数

	printf("1歩で何センチ動けますか？\n");
	scanf("%d",&a);
	printf("区間は何センチですか？\n");
	scanf("%d",&b);

	if(b%a == 0){
		WalkCount=b/a;
	}else{
		WalkCount=b/a;
		WalkCount++;
	}
	printf("%d歩\n",WalkCount);
	return 0;
}