#include <stdio.h>
int main(){
int  solo[6];
int  momo[6];
int i;
for(i = 0;i <6;i++){
    printf("solo[%d] = ",i);
    scanf("%d",&solo[i]);
   
  
    }
     for(i = 0;i < 6;i++){
        momo[5 - i] = solo[i];
    }
    for(i =0 ;i<6;i++){
          printf("momo[%d] =  %d\n",i,momo[i]);
    }
}
