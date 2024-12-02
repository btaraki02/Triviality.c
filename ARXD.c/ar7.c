#include <stdio.h>
int main(){
int A[3][4];
int B[4][2];
int C[3][2] = {0};
 int i = 0,j,l;
      printf("enter A\n");
    while(i < 3){
        j =0 ;
        while(j < 4){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
            j++;
        }
        i++;
    }
 printf("\n\n");
    
 i = 0;
      printf("enter B\n");
    while(i < 4){
        j =0 ;
        while(j < 2){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
            j++;
        }
        i++;
    }
printf("\n\n");
i =0 ;
while(i < 3){
l = 0;
while(l < 2){
    C[i][l] = 0;
 j = 0;
while(j < 4){
C[i][l]+= A[i][j] * B[j][l];
j++;
}
l++;
}
i++;
}
  printf("\n\n");
    i =0;
    while(i < 3){
        j =0 ;
        while(j < 4){
            printf("\t%d\t", A[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
     printf("\t\tsp\n\n");
    i =0;
    while(i < 4){
        j =0 ;
        while(j < 2){
            printf("\t%d\t", B[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
     printf("\t\tsp\n\n");
i = 0;
while(i < 3){
    l = 0;
    while(l < 2){
        printf("\t%d\t",C[i][l]);
        l++;
    }
    printf("\n\n\n");
    i++;
}
return 0 ;
}