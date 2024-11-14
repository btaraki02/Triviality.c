#include <stdio.h>

int main(void)
{
    int number;
    printf("\t\tIt's time for QSM!\n");
    printf("Choose a number : ( 1 , 2 , 3 , 4 ) : ");
    scanf("%d",&number);
while( number < 1|| number > 4){
    printf("\t\tIt's time for QSM!\n");
    printf("Choose a number : ( 1 , 2 , 3 , 4 ) : ");
    scanf("%d",&number);
    }
    

    if (number == 1)
    {
        printf("\t\t\t!1\n");
    }
    else if(number == 2)
    {
        printf("\t\t\t@2\n");
    }
    else if(number == 3)
    {
        printf("\t\t\t#3\n");
    }
    else if(number == 4)
    {
        printf("\t\t\t$4\n");
    }
      
    }

