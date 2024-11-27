#include <stdio.h> 
 int main(void) 
{ 
    char choose;
    printf("Would you like to play a game to entertain yourself?\t");
    scanf(" %c", &choose);
    if (choose == 'y'|| choose == 'Y'){
        printf("Please select a number between 0 and 10 : \t");
        int number;
        scanf(" %d", &number);
    
        if(0 <= number && number <= 10)
        {
            printf("It's your lucky day man congratulations you're the winner today!!\n ;)");
            }
            else if (number >= 11)
            {
                printf("Choose a smaller number!!");
                }
                else
                {
                    printf("Choose a larger number!!");
                    }
                    }
                    else if (choose == 'n' || choose == 'N')
                    {
                        printf("are you sure:|");
                        }
                        else
                        {
                            printf("Answer with 'y' or 'n', don't philosophize on me.\n");
                            }
                            return 0;
}