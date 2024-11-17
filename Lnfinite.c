#include <stdio.h>
int main(void){
    char so[10] = {15, 30, 2, 3, 5, 16, 20, 9, 90,10};
   for(int i = 0; i < 10;i++){
 if(so[i] % 15 == 0){
    printf("%d : it is fizz buzz!!\n",so[i]);
 }
 else if(so[i] % 5 == 0)
 {
    printf("%d :it is buzz!!\n",so[i]);
 }
 else if(so[i] % 3 == 0)
 {
    printf("%d : it is fizz!!\n",so[i]);
 }
 else {
    printf("%d :sorry it is not fizz buzz!!\n",so[i]);}
}
}