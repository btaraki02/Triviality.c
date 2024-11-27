#include <stdio.h>
#include <math.h>

int main(void){
  unsigned int T ;
  unsigned int H ;
  unsigned int m ;
  unsigned int s ;
  unsigned int R ;
    printf("Enter your time in seconds : ");
    scanf("%u",&T);
        H = T / 3600 ;
        R = T % 3600;
        m = R / 60;
        s = T % 60;;
        printf("%uH ",H);
        printf("%um ",m);
        printf("%us \n",s);
  }