#include <stdio.h>
int main(){

    int A[3][3];
    int B[3][3];
    int C[9];
      int i = 0,j;
      printf("enter A[3][3]\n");
    while(i < 3){
        j =0 ;
        while(j < 3){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
            j++;
        }
        i++;
    }
      printf("enter B[3][3]\n");
    i = 0;
    while(i < 3){
        j =0 ;
        while(j < 3){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
            j++;
        }
        i++;
    }
     printf("\n\n");
    i =0;
    while(i < 3){
        j =0 ;
        while(j < 3){
            printf("\t%d\t",A[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
     printf("\t\tswap\n\n");
    i =0;
    while(i < 3){
        j =0 ;
        while(j < 3){
            printf("\t%d\t",B[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
    i = 0;
    int l = 0;
        while(i < 3){
            j = 0;
            while(j < 3 && l < 9){
                
                C[l] = A[i][j] + B[i][j];
                j++;
                l++;
            }
            i++;

        }
        l = 0;
        while(l < 9){
            printf("%d\n",C[l]);
            l++;
        }
        return 0;

    }