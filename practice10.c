#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char const *argv[])
{	
	int x;
	int A;

	A=316;
	scanf("%d",&x);

	for(int i=1;i<x;i++){
		A+=52;
	}
	printf("%d\n",A);

return 0;
}
