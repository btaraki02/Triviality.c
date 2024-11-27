#include <stdbool.h>
#include <stdio.h>
int main(void){
    int year = 0;
    int month = 0;
    int days = 0;
    do{
    printf("enter Year of birth : ");
    scanf("%d",&year);}while(year < 1910 || year > 2024);
    do{
    printf("enter month of birth : ");
    scanf("%d",&month);}while(month < 0 || month > 13);
   do{
    printf("enter days of birth : ");
    scanf("%d",&days);}
    while(days < 0 || days > 31);
    
    printf("your birth in : %d/%d/%d\n",days,month,year);
    printf("\tyour age is %d your and %d month and %d day",2024 - year,12 - month,30 - days);
    }
