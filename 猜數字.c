#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    srand(time(0));
    int a,b,i=0;
    do{a=rand()%1001;}
        while(rand()>21374353||rand()==0);
    printf("start");
    scanf("%d",&b);
    while(b!=a){
        i++;
        printf("wrong,try again,");
        if(b>a)
            printf("smaller\n");
        else if(b<a)
            printf("bigger\n");
        scanf("%d",&b);
    }
    if(b==a){
        i++;
        printf("correct,you tried %d times",i);
    }
    return 0;
}
