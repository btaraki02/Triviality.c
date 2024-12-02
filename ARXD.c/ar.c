#include <stdio.h>
#include <stdlib.h>
int main(){
    int aro[3][3][3][3];
    int i=0,j,k,l;
    while(i < 3){
        j = 0;
        while(j < 3){
            k = 0;
            while(k < 3){
                l =0;
                while(l < 3){
                    printf("enter your size :aro[%d][%d][%d][%d] ",i,j,k,l);
                    scanf("%d",&aro[i][j][k][l]);
                    l++;
                }
                k++;
            }
           j++;
        } 
        i++;  
    }
}