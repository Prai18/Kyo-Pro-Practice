#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int me,you;

	printf("1:グー 2:チョキ 3:パーから選んでください\n");
	printf("自分の手\n");
	scanf("%d",&me);
	printf("相手の手\n");
	scanf("%d",&you);


	switch(me){
	case 1:
		if(you==1){
			printf("Drew\n");
		}else if(you==2){
			printf("Won\n");
		}else if(you==3){
			printf("Lost\n");
		}
		break;

	case 2:
		if(you==1){
			printf("Lost\n");
		}else if(you==2){
			printf("Drew\n");
		}else if(you==3){
			printf("Won\n");
		}
		break;

	case 3:
		if(you==1){
			printf("Won\n");
		}else if(you==2){
			printf("Lost\n");
		}else if(you==3){
			printf("Drew\n");
		}
		break;

	default:
		printf("error\n");
		break;
	}

	return 0;
}