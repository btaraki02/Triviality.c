#include <stdio.h>
int main(){
int solo[10];
int i = 0;
int s = 0;
for(i = 0;i < 10;i++){
     printf("solo[%d] = ",i);
    scanf("%i",&solo[i]);
    s = s + solo[i];
//scanf("",&);
}
printf(" total solo[%i] = %i \n",i,s);
}