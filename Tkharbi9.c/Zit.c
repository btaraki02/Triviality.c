#include <stdio.h>
//absolute value !!
int main(void)
{
        long int a;
         long int i;
        printf("number : ");
        scanf("%li",&a);
        if (a <= 0){
                i = a * (-1);
               printf("%li",i);
        }
        else {
                i = a; 
                printf("%li",i);
        }
        
}
