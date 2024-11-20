#include <stdio.h>
#include<math.h>
int main (void){
   float x;
    char k;
   char Type_of_operation;
   float y;
    Again :
    printf("\nenter your number x:");
    
    scanf("%f", &x);
    //(\n)****
    getchar();

    printf(" what is Type_of_operation : + , - , / , * , %% \n");
    
    scanf("%c", &Type_of_operation);

    printf("enter your number y:");
    
    scanf("%f", &y);

    if (Type_of_operation == '+')
    {
        printf(" x + y = %.2f\n", x + y);
        }
    else if (Type_of_operation == '-')
    {
        printf(" x - y = %.2f\n", x - y);
        }
    else if (Type_of_operation == '*'){
    
    printf(" x * y = %.2f\n", x * y);
    }
    else if (Type_of_operation == '/' && y != 0)
    {
        printf(" x / y = %.2f\n", x / y);
        }
    else if (Type_of_operation == '%' && (int)x == x && (int)y == y) { 
    
            printf("x %% y = %d\n", (int)x % (int)y);
    
        }
    else
     {
        printf("Invalid operation or division by zero0!!!\n");
        }
        goto Again;
}