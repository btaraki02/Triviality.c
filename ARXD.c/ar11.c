#include <stdio.h>
int main(){
    int prob;
     int dos[2][2];
    int i = 0,j,n =0;
      printf("enter dos\n");
    while(i < 2){
        j =0 ;
        while(j < 2){
            printf("dos[%d][%d]= ",i,j);
            scanf("%d",&dos[i][j]);
            j++;
        }
        i++;
    }
    prob = dos[0][0] * dos[1][1] - dos[0][1] * dos[1][0];
    printf("%d\n",prob);
    
    }