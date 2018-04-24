#include <stdio.h>
#include<stdlib.h>

/*1000000007*/

int main()
{
  int zero = 8;
  int count = 0;

  char q = 'a'; 

  while ( q != '7' ) {
    scanf("%c", &q);
    count++;
  }
  count -= 2;

  printf("%d\n", abs(zero - count) );

  return (0);
}


