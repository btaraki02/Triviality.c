#include <stdio.h>

int main(){
    int sod[10];
    int i;
   
    for (i = 0;i < 10;i++){
    printf("enter your number : ");
    scanf("%d",&sod[i]);
}
 int max1= sod[0];
    int max2 = sod[0];
    for(i = 0;i<10;i++){
        if(max1 < sod[i]){
            max2 = max1;
            max1 = sod[i];
        }
        if(max2 < sod[i] && max1 > sod[i]){
            max2 = sod[i];
        }
    }
    printf("the max1 is %d\n",max1);
    printf("the max2 is %d\n",max2);
    return 0;
}