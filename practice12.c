#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[255];
	int i;
	scanf("%s",str);

	for(i=0;i<=strlen(str);i++){
		if(str[i]>=65&&str[i]<=90){				//A〜Zまで
			str[i] = str[i] + 32;				//大文字から小文字へ
		}
		else{
			if(str[i]>=97&&str[i]<=122){		//a〜zまで
				str[i] = str[i] - 32;			//小文字から大文字へ
			}
		}
	}
	printf("%s\n",str);
	return 0;
}
