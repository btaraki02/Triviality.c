#include <stdio.h>
int ago[10];
int maxi(){
    int max = ago[0];
    for(int i = 0;i<10;i++){
        if(max < ago[i]){
            max = ago[i];
        }
    }
    return max;
}
int mini(){
    int min = ago[0];
    for(int i = 0;i<10;i++){
        if(min > ago[i]){
            min = ago[i];
        }
    }
    return min;
}
void swap(int lol[10]){
    
    for(int i = 0;i < 10;i++){
        lol[i] = ago[9-i];
        printf(" lol[%d] = %d\n",i,ago[9-i]);
    }

}
int main(){
int lol[10];
int max;
int min;
for(int i = 0;i < 10;i++){
    printf("enter ago[%d] : ",i);
    scanf("%d",&ago[i]);
}
max = maxi();
min = mini();
printf("the max is %d\n",max);
printf("the min is %d\n",min);
    swap(lol);
}