#include <stdio.h>
int main(void){
int a;
int b;
int i;
if(a < 0){
    a = -a;
}
printf("enter your number for collatz conjeture : ");
scanf("%i",&a);
while(a!= 1){
if(a % 2 != 0){
    b = 3 *a + 1;
}
else
//(a % 2 == 0)
{
    b = a/2;
}


}
printf("%d",b);
return 0;
}