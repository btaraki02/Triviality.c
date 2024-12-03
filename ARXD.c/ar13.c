#include <stdio.h>
int main(){
    int pool[3][4];
    int *p = (int *)pool;
    int min,max;
    int i,j;
    i = 0;
   
    while(i < 3){
        j = 0;
        while(j < 4){
            printf("var[%d][%d] :",i,j);
            scanf("%d",(p +i*4 +j));
            j++;
        }
        i++;
    }
 min = *p;
    max = *p;
        i = 0;
    while(i < 3){
        j = 0;
        while(j < 4){
            printf("%d\t",*(p + i * 4 +j));

                if(max < *(p + i * 4 + j)){
                   max = *(p + i * 4 + j);
             }
            
            if(min > *(p + i * 4 + j)){
                min = *(p + i * 4 + j);
                }
            j++;
        }
        printf("\n\n");
        i++;
    }
printf("min is =%d\n",min);
printf("max is =%d\n",max);
return 0 ;
}