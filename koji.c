#include <stdio.h>

int main(void){
    int a;
    int i ;
    int j ;
    
    printf("enter a : ");
    scanf("%i",&a);
for( i= 1 ;i <=a;i++){
    
        for(j = 1;j<=i;j++){
            printf("*");
         }
        printf("\n");
}
return 0;
}