#include <stdio.h>
int main(){
int pok[3][5][2];
int *p = (int *)pok;
int i,j,l;
i = 0;
while(i < 3){
    j = 0;
    while(j < 5){
        l = 0;
        while(l < 2){
            printf("enter class[%d]student[%d]The material[%d]:",i,j,l);
            scanf("%d",(p + i * 10 + j * 2 + l));
            l++;
        }
        j++;
    }
    i++;
}
int max = *p;
i = 0;
while(i < 3){
    j = 0;
    max = 0;
    while(j < 5){
        l = 0;
        while(l < 2){
            printf("%d\t",*(p + i * 10 + j * 2 + l));
           if(max < *(p + i * 10 + j * 2 + l)){
                max  = *(p + i * 10 + j * 2 + l);}
            l++;
        }
        j++;
    }
    printf("\n\n the number 1 is :%d\n\n\n",max);
    i++;
}

}
