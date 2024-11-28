#include <stdio.h>
/*
Allows swapping values ​​between variables 
a and b if they have the same sign.
 If they have different signs,
  arithmetic operations will be performed
  .*/
void swap(float *pa,float*pb){
    float t;
    if((*pa > 0 && *pb > 0 )|| (*pa < 0 && *pb < 0) ){
         t = *pa;
        *pa = *pb;
        *pb = t;
    }
    else{
        t = *pa + *pb;
        *pa = t;
        *pb = (*pa - *pb) * *pb;
    }
}
int  main(){
float a,b;
float *pa= &a,*pb = &b;
printf("enter your number please a: ");
scanf("%f",pa);
printf("\nenter your number please b: ");
scanf("%f",pb);
    swap(pa,pb);
    printf("a  = %.2f and b = %.2f",*pa,*pb);
}