#include<stdio.h>

int main(int argc, char const *argv[])
{
	int p;			
	int a=1;
	int binary = 0;
  	int base = 1;
  	int count=0;

	scanf("%d",&p);

	for (int i = 0; i < p; ++i)
	{
		a=a*2;
	}
	a-=1;

   // 10進数を2進数に変換 
  while(a>0){
    binary = binary + ( a % 2 ) * base;
    a = a / 2;
    base = base * 10;
    count++;
  }
 	printf("%d\n",count);

	return 0;
}