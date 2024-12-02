#include <stdio.h>
int main(){

    int VOM[3][7];
    int JOK[4][3];
    int FOI[12];
      int i = 0,j;
      printf("enter VOM\n");
    while(i < 3){
        j =0 ;
        while(j < 4){
            printf("VOM[%d][%d]= ",i,j);
            scanf("%d",&VOM[i][j]);
            j++;
        }
        i++;
    }
      printf("enter JOK\n");
    i = 0;
    while(i < 3){
        j =0 ;
        while(j < 4){
            printf("JOK[%d][%d]= ",i,j);
            scanf("%d",&JOK[i][j]);
            j++;
        }
        i++;
    }
     printf("\n\n");
    i =0;
    while(i < 3){
        j =0 ;
        while(j < 4){
            printf("\t%d\t",VOM[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
     printf("\t\tswap\n\n");
    i =0;
    while(i < 3){
        j =0 ;
        while(j < 4){
            printf("\t%d\t",JOK[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
    i = 0;
    int l = 0;
        while(i < 3){
            j = 0;
            while(j < 4 && l < 12){
                
                FOI[l] = VOM[i][j] * JOK[i][j];
                j++;
                l++;
            }
            i++;

        }
        l = 0;
        while(l < 12){
            printf("%d\n",FOI[l]);
            l++;
        }
        return 0;

    }