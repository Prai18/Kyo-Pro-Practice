#include<stdio.h>

int main(void){

  int n,i;
  scanf("%d",&n);

  int a[n-1],b[n],c[n];

  for(i = 0; i < n-1; i++){
    scanf("%d",&a[i]);
  }

  for(i = 0; i < n; i++){
    scanf("%d %d", &b[i], &c[i]);
  }

  int ans = 0;
  int num = 0;
  for (i = 0; i < n; i++) {
  	if (i > 0) {
			ans += num * a[i - 1];
    }
  	num += c[i];
  	num -= b[i];
  }
  printf("%d\n", ans);
  return 0;
}
