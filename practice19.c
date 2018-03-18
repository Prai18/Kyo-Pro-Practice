#include<stdio.h>

int  main(void){
 
  int N, M, i, j;
  scanf("%d", &N);

  int Ai[N], Bi[N];
  for(i=0;i<N;i++){
    scanf("%d %d", &Ai[i], &Bi[i]);
  }

  scanf("%d", &M);

  int Xi[M], Yi[M];
  for(i=0;i<M;i++){
    scanf("%d %d", &Xi[i], &Yi[i]);
  }

  int sum[M];
  for(j=0;j<M;j++)sum[j] = 0;


  for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      if(Ai[i] >= Xi[j] && Bi[i] <= Yi[j]){
	sum[j]++;
      }
    }
  }

  int max = 0;
  
  for(j=0;j<M;j++){
    if(max < sum[j]){
      max = sum[j];
    }
  }

  if(max == 0){
    printf("0\n");
  }else {
    for(i=0;i<M;i++){
      if(sum[i] == max)
	printf("%d\n", i+1);
    }
  }
  
/*
3
6 4		0		
5 2		1
2 5		2
2
4 3		0		1		1
5 4		1		1	1	2
*/



	return 0;
}