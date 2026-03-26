#include <stdio.h>

int main(){
    int a,b,n=0,c,i;
    printf("¿é¤J¦¸¤è");
    scanf("%d %d",&a,&b);
    do{
        c=1;
        for(i=0;i<=n;i++)
            c=c*a;
        printf("%d^%d=%d\n",a,i,c);
        n++;
    }while(n<b);

    return 0;
}
