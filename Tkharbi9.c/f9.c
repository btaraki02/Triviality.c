#include <stdio.h>
#include <math.h>
float a,b,c;

float Delta()
{
    return b * b - 4 * a * c;
}
void abc(){
    printf("enter a : ");
scanf("%f",&a);
if(a == 0){
    printf("fuck you");
    printf("Error: 'a' should not be zero.\n");
        return;
}
printf("enter b : ");
scanf("%f",&b);
printf("enter c : ");
scanf("%f",&c);}
void hale(float delta){
    float x1,x2,x;
if(delta > 0){
        x1 = (-b - sqrt(delta))/(2 * a);
        x2 = (-b + sqrt(delta))/(2 * a);
       printf("x1 = %.0f , x2 = %.0f\n",x1,x2);
    }
    else if(delta == 0){
         x = -b /(2 * a);
        printf("x = %.0f\n",x);
    }
    else{
        printf("No real solutions (delta < 0).\n");
    }
}

int main(){
    abc();  
    float delta;    
     delta = Delta();
    hale(delta);
return 0;
}