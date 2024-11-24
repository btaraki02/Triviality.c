#include <stdio.h>
int i;
void foi(int n){
 int p;
for(i = 0;i <= 10;i++){
    p = n * i;
    printf("%i * %i =  %i\n",n,i,p);
}

}
int main(){
int n,p;
printf("enter your number : ");
scanf("%i",&n);
while(i <= 10){
foi(n);
i++;
}
return 0 ;
}