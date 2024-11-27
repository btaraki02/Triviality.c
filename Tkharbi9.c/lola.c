#include <stdio.h>
int main(void){
    int paper;
    float pay;
    printf("enter your number paper : ");
    scanf("%i",&paper);
    if (paper < 0){printf("siiir ******");}
     else if  (paper > 30){
        pay = 10 * 0.30 + 20 * 0.25 + (paper -30) * 0.20; 
        printf("%.2f Dh",pay);
    }
    else if (paper <= 30 ){
        pay = 10 * 0.30 + (paper - 10)* 0.25;
        printf("%.2f Dh",pay);
    }
    else if(paper <= 10){
        pay = paper * 0.30;
        printf("%.2f Dh",pay);
    }
    else {printf(":\\");}
    return 0;
}