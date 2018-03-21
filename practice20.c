#include <stdio.h>
/*XをNにする	-> NをXにする*/

int main(void){
	int N,X=1;
	int count=0;

	scanf("%d",&N);

while( N > 1 ){
        if( N%2 == 1 ){ 
            N++;    
            count++;    
        }

        N /= 2; 
        count++;    
    }

	printf("%d\n",count);

	return 0;
}
