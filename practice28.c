#include<stdio.h>

typedef struct {
    char *name;
}animal;


int main(void){
   animal oni;
   animal *ani;
   ani=&oni;

   oni.name="ミンク";
   printf("%s\n",oni.name);

   ani->name="インコ";
   printf("%s\n",ani->name);
   return 0;
}