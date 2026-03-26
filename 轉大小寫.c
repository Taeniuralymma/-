#include <stdio.h>

int main(){
    char a;
    printf("輸入一個英文字母");
    scanf("%c",&a);
    if(a>=65&&a<=90){
        a=a+32;
        printf("%c",a);
        }
    else if(a>=97&&a<=122){
        a=a-32;
        printf(" %c",a);
        }
    while(a<65||a>90&&a<97||a>122){
        printf("這不是英文字母,再試一次\n");
        scanf(" %c",&a);
        if(a>=65&&a<=90){
        a=a+32;
        printf("%c",a);
        }
        else if(a>=97&&a<=122){
        a=a-32;
        printf("%c",a);
        }
    }
    return 0;
}
