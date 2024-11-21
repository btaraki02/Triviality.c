#include <stdio.h>
/*
enter a : 5
* * * * * 
* *   * * 
*   *   * 
* *   * * 
* * * * *  
*/
int main(void){
    int a,i=1,j = 1;
    
    printf("enter a : ");
    scanf("%i",&a);
    
for( i= 1 ;i <=a;i++){
    int b = a;
        for(j = 1 ;j<= b;j++){
             
         if(i == 1 || i == a|| j == 1 || j == b || j == i || j== b - i + 1){
            printf("* ");
            }
            else{
                printf("  ");
            }
         } 
        printf("\n");
       
}
return 0;
}