#include <stdio.h>
/*
enter a : 8
enter b : 8
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
*/
int main(void){
    int a,b,i=1,j = 1;
    
    printf("enter a : ");
    scanf("%i",&a);
    printf("enter b : ");
    scanf("%i",&b);
for( i= 1 ;i <=a;i++){
        for(j = 1 ;j<= b;j++){
            printf("* ");
            
         } 
        printf("\n");
       
}
return 0;
}