#include <stdio.h>

int main(){
    int a,b,c,i,j;
    printf("輸入要印出幾層的三角形");
    scanf("%d",&a);
    printf("若要由上到下輸入1\n若要由下到上輸入0\n");
    scanf("%d",&b);
    printf("若要由左到右輸入1\n若要由右到左輸入0\n");
    scanf("%d",&c);
    if(c==1){
        if(b==0){
            for(i=1;i<=a;i++){
                for(j=0;j<i;j++){
                    printf("@");
                }
                printf("\n");
            }
        }
        else if(b==1){
            for(i=a;i>0;i--){
                for(j=i;j>0;j--){
                    printf("@");
                }
                printf("\n");
            }
        }
    }
    else if(c==0){
        if(b==0){
            for(i=1;i<=a;i++){
                for(j=0;j<a-i;j++){
                    printf(" ");
                }
                for(j=0;j<i;j++){
                    printf("@");
                }
                printf("\n");
            }
        }
        else if(b==1){
            for(i=a;i>0;i--){
                for(j=a-i;j>0;j--){
                    printf(" ");
                }
                for(j=i;j>0;j--){
                    printf("@");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
