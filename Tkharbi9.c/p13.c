#include <stdio.h>
int main(){
    //t1[***]+t2[****]=t1[*******];
    int t1[9];
    int  t2[4];
    int a = 5,b=4;
    int *pa =  t1;
    int *pb =  t2;
    for(pa =  t1 ; pa <  t1 + a; pa++){ 
        printf("enter your  t1[%d] :",pa -  t1);
        scanf("%d",pa);}
        printf("and\a");
        for(pb =  t2 ;  pb <  t2 + b; pb++){ 
        printf("enter your  t2[%d] :",pb -  t2);
                  scanf("%d",pb);
}
    for(pa = t1 + a,pb = t2; pb < t2 + b;pb++,pa++){
        *pa =*pb;
           
    }
 a = a +b;
for(pa =t1 ;pa < a + t1 ;pa++){
printf("%d\n",*pa);

}}