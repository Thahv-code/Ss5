#include <stdio.h>

int main() {


    int num = 30;
    int a;
    while ( num == 5){
        printf("hay nhap mot so ");
        scanf("%d", &a);
        if(a == 30){
            printf("đúng rồi\n");
            break;
        } else {
            printf("sai roi thu lai di\n");
        }
    }
        return 0;
    
}