#include <stdio.h>
int main(){
char solo[5] = {66,'i','l',65,'l'};
int i ;
for(i = 0;i <5;i++){
    if(solo[i] < 97){
       solo[i]= solo[i] + 32;
    }
printf("%c",solo[i]);
//scanf("",&);
}

}