#include <stdio.h>
int main(){
     int A[5][5];
    int i = 0,j;
      printf("enter A\n");
    while(i < 5){
        j =0 ;
        while(j < 5){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
            j++;
        }
        i++;
    }
    printf("before\n");
    i =0;
    while(i < 5){
        j =0 ;
        while(j < 5){
            printf("\t%d\t", A[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
    i = 0;
while(i < 5 ){
    j = 0;
    while(j < 5){
    if(j != i && i <j){
        int swap = A[i][j];
        A[i][j] = A[j][i];
        A[j][i]= swap;
    }
    j++;
    }
    i++;
}
 printf("After\n");
    i =0;
    while(i < 5){
        j =0 ;
        while(j < 5){
            printf("\t%d\t", A[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
return 0;
}