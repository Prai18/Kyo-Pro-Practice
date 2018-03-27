#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int count=0;
	scanf("%d",&n);

	char s[n];
	char t[n];
	scanf("%s",s);
	scanf("%s",t);

	for (int i = 0; i < n; ++i)
	{
		if(s[i]!=t[i]){
			s[i]=t[i];
			count++;
		}
	}

	printf("%d\n",count);
	return 0;
}