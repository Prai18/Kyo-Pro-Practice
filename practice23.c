#include<stdio.h>
int main(void){
	int n, h, m, t, n_t;
	scanf("%d %d %d %d", &n, &h, &m, &t);
	n_t = (n-1) * t;
	m += n_t;
	if(m >= 60){
		h += m / 60;
		m %= 60;
	}
	if(h >= 24){
		h %= 24;
	}
	printf("%d\n%d", h, m);
	return 0;
}