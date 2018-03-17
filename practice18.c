#include <stdio.h>
int main(int argc, char const *argv[])
{
	int array[9];

	for (int i = 0; i < 9; ++i)
	{
		scanf("%d",&array[i]);
	}

	for (int i = 8; i >=0; --i)
	{
		if(array[i]-array[i-1]!=1){
			printf("%d\n",array[i-1]+1);
		}
	}
	return 0;
}