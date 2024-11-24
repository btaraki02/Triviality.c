#include <stdio.h>
int main(){
float solo[20];
int i = 0;
float s = 1000;

for(i = 0;i < 20;i++){
     s = s + s *0.02;
     printf(" total solo[%i] = %.2f \n",i,s);
}

}