#include <stdio.h>
int main(){
    int number = 8;
     int mock[5][5];
    int i = 0,j,n =0;
      printf("enter mock\n");
    while(i < 5){
        j =0 ;
        while(j < 5){
            printf("mock[%d][%d]= ",i,j);
            scanf("%d",&mock[i][j]);
            j++;
        }
        i++;
    }
    i =0;
    while(i < 5){
        j =0 ;
        while(j < 5){
            printf("\t%d\t", mock[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
    i = 0;
while(i < 5 ){
    j = 0;
    while(j < 5){
    if(number == mock[i][j]){
        n++;
    }
    j++;
    }
    i++;
} 
printf("%d\n",n);
return 0;
}