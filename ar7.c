#include <stdio.h>
int main(){
int solo[10] = {1,2,3,4,5,6,7,8,9,10};
int i = 0  ;
int n;
int x = 0;
printf("enter your number :");
scanf("%i",&n);
for(i = 0;i < 10;i++){
   
   if( n == solo[i]){
    x = 1;
   }

}
 if(x == 1){
        printf("yes it's him %i\n",n);
    }
else {
        printf("now it's not him \n");
    }
    return 0;
}