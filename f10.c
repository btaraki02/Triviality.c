 #include <stdio.h>
 int n;
 
 void positive(int arr[n]){

    for(int i = 0;i < n;i++){
        if(arr[i] > 0){
            printf("arr[%d] it's positiv %d\n",i,arr[i]);
        }
        else if(arr[i] < 0){
             printf("arr[%d] it's negatv %d\n",i,arr[i]);
        }
        else{
            printf("arr[%d] it's %d\n",i,arr[i]);
        }
    }}

float total(int arr[n]){
    float t = 0;
    for(int i = 0;i < n;i++){
        t = t + arr[i];
    }
    return t;

}
float foi( int arr[n]){
    float f = 1;
    for(int i = 0;i < n;i++){
        f = f * arr[i];
    }
    return f;

}
int main(){
printf("enter n :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i <n;i++){
        printf("enter your arrays : ");
        scanf("%d",&arr[i]);
    }
    float t;
    t = total(arr);
    printf("total is %.0f\n",t);
    float f;
    f = foi(arr);
    printf("foi is %.0f\n",f);
    printf("average of the elements in the array is %.0f\n",t/n);
    positive(arr);
    
    
    }


