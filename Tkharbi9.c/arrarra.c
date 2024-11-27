#include <stdio.h>


int main(void)


{
int i;
int somo[10];
float M;

for(i = 0;i < 10;i++){
    printf("\nenter your number : %d :",i + 1);
scanf("%d",&somo[i]);
M = M + somo[i];
}
printf(" mo %.2f",M/10);
return 0;
}