#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    srand(time(0));
    int a,b,i=0;
    do{a=rand()%1001;}
        while(rand()>21374353||rand()==0);
    printf("開始");
    scanf("%d",&b);
    while(b!=a){
        i++;
        printf("猜錯了,再試一次,");
        if(b>a)
            printf("太大了\n");
        else if(b<a)
            printf("太小了\n");
        scanf("%d",&b);
    }
    if(b==a){
        i++;
        printf("猜對了!\n你猜了%d次",i);
    }
    return 0;
}
