#include <stdio.h>
int n;

int mor(){
    int i = 0;
    do{
        n = n /10;
        i++;
    }while(n != 0);
    return i;
    }
int main(){

printf(" : ");
scanf("%i",&n);

printf("%d",mor(n));

}