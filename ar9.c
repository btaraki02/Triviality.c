#include <stdio.h>
int main(){
int solo[10];
int i = 0;
int y=0;
int x = 0;
float M= 0;
for(i = 0;i < 10;i++){
     printf("solo[%d] = ",i);
    scanf("%i",&solo[i]);
 if(solo[i] >= 10){
    x++;
   }
   else {
    y++;
   }
    M = M + solo[i];

}
        printf("Successful %i\n",x);
        printf("the M is %.2f\n",M/10);
        printf("Raspin %i \n",y);
    return 0;
}