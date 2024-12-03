#include <stdio.h>
#include <string.h>

int main(){
char cool[4][10] = {"Bilal","Amjad","Layla","Nada"};
char login[10];
int i ,m;

printf("enter your name : ");
gets(login);
m = 0;
i =0;
while(i < 4){
    if(strcmp(login, cool[i]) == 0 ){
        m =1;
        break;
    }
i++;
}
if(m ==1 )
    printf("welcome %s !",login);
    else
    printf("who are you, you idiot !!!");
    return 0;
}