#include <stdio.h>
int main(){
int solo[10] = {1,2,3,4,5,6,5,5,9,10};
int i = 0  ;
int n;
int x = 0;
printf("enter your number :");
scanf("%i",&n);
for(i = 0;i < 10;i++){
   
   if( n == solo[i]){
    x++;
   }

}
 if(x != 0){
        printf("existing %i\n",x);
    }
else {
        printf("unavailable %i \n",n);
    }
    return 0;
}