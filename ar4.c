#include <stdio.h>
int main(){
int  solo[3];
int  momo[3];
int i = 0 ;
int M;
int a = 0;
for(i = 0;i <3;i++){
    printf("solo[%d] = ",i);
    scanf("%i",&solo[i]);
    printf("momo[%d] = ",i);
    scanf("%i",&momo[i]);
    M = solo[i] * momo[i];
     a = a + M;
    }
    printf("%i",a);
}
