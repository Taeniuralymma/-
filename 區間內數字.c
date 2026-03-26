#include <stdio.h>

int main(){
    int a[10];
    int u,d,i,j=0,k;
    printf("輸入10個1到2000000000內的數\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        while(a[i]>2000000000||a[i]<1){
            printf("請輸入範圍內的數");
            scanf("%d",&a[i]);
        }
    }
    printf("輸入上限與下限值");
    scanf("%d %d",&u,&d);
    while(u<d){
        printf("請先輸入較大的數");
        scanf("%d %d",&u,&d);
    }
    int b[10]={0};
    for(i=0;i<10;i++){
        if(a[i]>d&&a[i]<u){
            b[j]=a[i];
            k++;
            j++;
        }
    }
    for(i=0;i<10;i++){
        if(b[i]!=0)
            printf("%d ",b[i]);
        else
            break;
    }
    printf("共有%d個數字在此範圍內",j);
    return 0;
}
