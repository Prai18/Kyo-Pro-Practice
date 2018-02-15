#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int price;
	int tax_rate;

	printf("商品の金額はいくらですか？(税抜き)\n");
	scanf("%d",&price);

	printf("消費税率は？\n");
	scanf("%d",&tax_rate);
	
	tax_rate=price*tax_rate*0.01;

	printf("税込み%d円です\n",price+tax_rate);

	return 0;
}