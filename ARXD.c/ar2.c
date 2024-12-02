#include <stdio.h>
int main(){
    int kook[3][3];
    int i = 0,j;float s = 0;
    while(i < 3){
        j =0 ;
        while(j < 3){
            printf("size[%d][%d] :",i,j);
            scanf("%d",&kook[i][j]);
            s += (float)j / 2;
            j++;
        }
        i++;
    }
    i =0;
    while(i < 3){
        j = 0;
        while(j < 3){
            printf("kook[%d][%d] = %d\n",i,j,kook[i][j]);
            j++;
        }
        i++;
    }
    printf("%.2f\n",s);
    return 0 ;
}