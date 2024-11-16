#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    int compare;
    printf("Do you want to \n*1) compare and print numbers from smallest to largest(enter number 1)?\n*2) compare and print numbers from largest to smallest(enter number 2)? \n");
   printf("compare : ");
   scanf("%i",&compare); 
    if(compare == 2){
printf("\tenter 3 number a and b and c :\n");
printf("enter a : ");
scanf("%i",&a);
printf("enter b : ");
scanf("%i",&b);
printf("enter c : ");
scanf("%i",&c);
    
    if (a > b) {
        
        if (b > c) {
            printf("a\nb\nc\n"); 
        } else if (a > c) {
            printf("a\nc\nb\n"); 
        } else {
            printf("c\na\nb\n"); 
        }
    } else if (b > a) {
        
        if (a > c) {
            printf("b\na\nc\n"); 
        } else if (b > c) {
            printf("b\nc\na\n"); 
        } else {
            printf("c\nb\na\n"); 
        }
    } else if (c > a) {
        
        if (a > b) {
            printf("c\na\nb\n"); 
        } else {
            printf("c\nb\na\n"); 
        }
    } else {
        printf(":|\n"); 
    }
    }
    else if(compare == 1){
        printf("\tenter 3 number a and b and c :\n");
printf("enter a : ");
scanf("%i",&a);
printf("enter b : ");
scanf("%i",&b);
printf("enter c : ");
scanf("%i",&c);
    
    if (a < b) {
        
        if (b < c) {
            printf("a\nb\nc\n"); 
        } else if (a < c) {
            printf("a\nc\nb\n"); 
        } else {
            printf("c\na\nb\n"); 
        }
    } else if (b < a) {
        
        if (a < c) {
            printf("b\na\nc\n"); 
        } else if (b < c) {
            printf("b\nc\na\n"); 
        } else {
            printf("c\nb\na\n"); 
        }
    } else if (c < a) {
        
        if (a < b) {
            printf("c\na\nb\n"); 
        } else {
            printf("c\nb\na\n"); 
        }
    } else {
        printf(":|\n"); 
    }

    }
    else {
        printf("enter 1 or 2");
    }
    return 0;
}
