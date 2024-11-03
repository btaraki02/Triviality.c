#include <stdio.h>
int main (void){
   int x;
   char op;
   int y;

    printf("enter your namber x:");
    
    scanf("%d", &x);
    //(\n)****
    getchar();

    printf(" what is op : + , - , / , * \n");
    
    scanf("%c", &op);

    printf("enter your namber y:");
    
    scanf("%d", &y);

    if (op == '+')
    {
        printf(" x + y = %d", x + y);
        }
    else if (op == '-')
    {
        printf(" x - y = %d", x - y);
        }
    else if (op == '*'){
    
    printf(" x * y = %d", x * y);
    }
    else if (op == '/' && y != 0)
    {
        printf(" x / y = %d", x / y);
        }
    else
     {
        printf("Invalid operation or division by zero0!!!\n");
        }
}