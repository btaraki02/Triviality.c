#include <stdio.h>

int main(void){
    int a = 0;
    int b = a + 1 ;
    int c = b + 1;
    while(a < 8){
        printf("%d",a);
        if(b < 9){
            printf("%d",b);
            b++
        }
        a++;
    }

}