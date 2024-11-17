#include <stdio.h>
int main(void){
    printf("HI!\n");
    printf("Do you want from largest to smallest? enter 0 !\n");
    printf("Do you want from smallest to largest? enter 1 !\n");
    printf("enter 0 or 1 : ");
    int x;
    scanf("%d",&x);
    if (x == 0){
    int a,b,c ;
    printf("enter your number:\n");
    printf("enter a :");
    scanf("%i",&a);
    printf("enter b :");
    scanf("%i",&b);
    printf("enter c :");
    scanf("%i",&c);
    if( a == b && a == c){printf("%i=%i=%i",a,b,c);}
    else if(a == b && b > c){printf("%i=%i\n%i",a,b,c);}
    else if(a == b && c > b){printf("%i\n%i=%i",c,b,a);}
    else if(a == c && c > b){printf("%i=%i\n%i",a,c,b);}
    else if(a == c && b > c){printf("%i\n%i=%i",b,c,a);}
    else{
    if(a > b){
        if(b > c){printf("%i\n%i\n%i",a,b,c);}
        else if(c > b){
            if(a > c){printf("%i\n%i\n%i",a,c,b);}
            else{printf("%i\n%i\n%i",c,a,b);}
        }
    }
    else if(b > a){
        if(a > c){printf("%i\n%i\n%i",b,a,c);}
        else if(c > b){printf("%i\n%i\n%i",c,b,a);}
        else{printf("%i\n%i\n%i",b,c,a);}
    }
    }
}
else if(x == 1){
int a,b,c ;
    printf("enter your number:\n");
    printf("enter a :");
    scanf("%i",&a);
    printf("enter b :");
    scanf("%i",&b);
    printf("enter c :");
    scanf("%i",&c);
    if( a == b && a == c){printf("%i=%i=%i",a,b,c);}
    else if(a == b && b < c){printf("%i=%i\n%i",a,b,c);}
    else if(a == b && c < b){printf("%i\n%i=%i",c,b,a);}
    else if(a == c && c < b){printf("%i=%i\n%i",a,c,b);}
    else if(a == c && b < c){printf("%i\n%i=%i",b,c,a);}
    else{
    if(a < b){
        if(b < c){printf("%i\n%i\n%i",a,b,c);}
        else if(c < b){
            if(a < c){printf("%i\n%i\n%i",a,c,b);}
            else{printf("%i\n%i\n%i",c,a,b);}
        }
    }
    else if(b < a){
        if(a < c){printf("%i\n%i\n%i",b,a,c);}
        else if(c < b){printf("%i\n%i\n%i",c,b,a);}
        else{printf("%i\n%i\n%i",b,c,a);}
    }
    }
}

else {printf("Really man");}



}