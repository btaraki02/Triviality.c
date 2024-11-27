#include <stdio.h>

int main(){
int n;
int a;
int s;
printf("enter your number for arrays : ");
scanf("%d",&n);
int gogo[100];
int i;
for (i= 0;i<n;i++){
    printf("arrays[%d] : ",i);
    scanf("%d",&gogo[i]);
}
printf("enter your number for arrays[?] : ");
scanf("%d",&a);
     //gogo[i] = gogo[i + 1];
     if (a < 0 || a > n) {
        printf("Invalid position!\n");
        return 1;
    }
     printf("enter your number array[%d]: ",a);
     scanf("%d",&s);
     
     gogo[a] = s;
 
     for(i = 0 ; i < n;i++){
        printf("%d",gogo[i]);
     }
}