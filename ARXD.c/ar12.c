#include <stdio.h>
int main(){
    int bom[3][2][2];
    int i,j,k;
    i = 0;
    while(i < 3){
        j =0 ;
        while(j < 2){
            k = 0;
            while(k < 2){
                printf("enter vat[%d][%d][%d] : ",i,j,k);
                scanf("%d",&bom[i][j][k]);
                k++;
            }
            j++;
        }
        i++;
    }
  i = 0;
    while(i < 3){
        j =0 ;
        while(j < 2){
            k = 0;
            while(k < 2){
                printf("%d\t",bom[i][j][k]);
                k++;
            }
            j++;
        printf("\n\n");
        }
        i++;
        printf("\n\n");
    }


}