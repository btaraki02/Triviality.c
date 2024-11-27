#include <stdio.h>
int main(){
int solo[10];
int i = 0;
int s = 0;
int Min = solo[0];
int Max = solo[10];
for(i = 0;i < 10;i++){
     printf("solo[%d] = ",i);
    scanf("%i",&solo[i]);
    if(Min > solo[i]){
            Min = solo[i];
    }
    if(Max < solo[i]){
        Max = solo[i];
    }
    }
    printf("min is %i and max is %i \n",Min,Max);
    
    }