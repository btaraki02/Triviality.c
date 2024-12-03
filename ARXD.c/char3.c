#include <stdio.h>
int main(){
int nano[4][5];
int na[4][5];
int *p2= (int *)na;
int *p = (int *)nano;
int i,j,l,n;
i = 0;
while(i < 4){
    j = 0;
    while(j < 5){
            printf("enter class[%d]student[%d]",i,j);
            scanf("%d",(p + i * 5 + j ));

        j++;
    }
    i++;
}
   i = 0;
    while (i < 4) {
        j = 0;
        while (j < 5) {
            *(p2 + i * 5 + j) = *(p + i * 5 + j);
            j++;
        }
        i++;
    }
i = 0;
while(i < 4){
    j = 0;
    while(j <5){
      *(p + i * 5 + j ) = *(p2 + (3 - i) * 5 + (4 - j));
            printf("%d\t",*(p + i * 5 + j ));
        j++;
    }
    printf("\n\n");
    i++;
}
return 0;
}
