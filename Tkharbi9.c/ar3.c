#include <stdio.h>
int main(){
int  solo[3] = {5,4,3};
int  momo[3] = {2,2,2};
int i ;
int M;
int a = 0;
for(i = 0;i <3;i++){
    M = solo[i] * momo[i];
     a = a + M;
    }
printf("%i",a);
//scanf("",&);
}
