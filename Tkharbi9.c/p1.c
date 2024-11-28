#include <stdio.h>

int main(){
    int *p;
    int a = 34;
    p = &a;
    *p = 443;
    printf("%d\n",*p);
    printf("%p",p);
}