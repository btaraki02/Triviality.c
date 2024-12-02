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
    int s = 0;
    i = 0,j = 0;
    while(i < 5){
        while(j < 5){
            s += A[i][j];
            j++;
        }
        i++;
    }
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
    printf("%d\n",s);
}