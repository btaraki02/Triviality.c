#include <stdio.h>
int main(void){
int Number_of_bread;
const int price_of_bread = 3; 
const int flour_bag = 86;
const int baker_yeast = 7;
const int Bota_Gaze = 50;
printf("How many loaves of bread did you sell today? :");
scanf("%d",&Number_of_bread);
float t7in = (float)Number_of_bread / 78;
float t7indh = t7in * flour_bag;
float bota = (float)Number_of_bread / 156;
float botadh = bota * Bota_Gaze;
float khmira = (float)Number_of_bread / 156;
float khmiradh = khmira * baker_yeast;
float toto = khmiradh + botadh + t7indh ;

printf("\tTotal income : %d Dh\n",Number_of_bread * price_of_bread);
printf("\t\tTotal consumption is  : %.3f Dh\n",toto);

printf("\t\t\tNet profit is : %.2f Dh" ,(Number_of_bread * price_of_bread) - toto);

}
