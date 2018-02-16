#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	int L=7;			//100円硬貨
	int M=20;			//25円硬貨
	int N=10;			//1円硬貨

	int thousand=0;

	int x,y,z;
	int sum;

	x=N*1/25;								//1円→25円
	if(x>=1){								
		for(int i=0;i<x;i++){
			M++;
		}
		N=N*1%25;
	}
	

	y=M*25/100;								//25円→100円
	if(y>=1){
		for(int i=0;i<y;i++){	
			L++;
		}
		M=M*25%100;
		M=M/25;
	}


	z=L*100/1000;							//100円→1000円
	if(z>=1){
		for(int i=0;i<z;i++){
			thousand++;
		}
		L=L*100%1000;
		L=L/100;
	}

	

	sum=L+M+N;
	printf("%d\n",sum);


	return 0;
}
