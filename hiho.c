#include <stdio.h>
#include <time.h>
int main(){
int number;
int GO;
int i = 1;
const int MAX =20,MIN = 1;
srand(time(NULL));
GO = (rand() % (MAX - MIN +1)) + MIN;
printf("Hello friend, let's play a little game, all you have to do is guess the correct number within 5 attempts\n");
while(i < 6){
    printf("enter  your number:} : 0 < number < 20 : ");
   scanf("%i",&number);
if( number > 20 || number < 0)
continue;
if(GO > number){
    printf("it is small\n");
}
else if(GO < number ){
    printf("it is big\n");
}
if(number == GO)
{
    printf("Congratulations man you are very lucky!! you found out the answer in a try %i\n",i);
    break;
}
if(number != GO){
        printf("It's not him try again!!(%i) \n\n",i);
}
if(i == 5){
        printf("Bad luck today try play again!!  %i \n",GO);
}
i++;
}
return 0;
}