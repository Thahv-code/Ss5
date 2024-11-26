#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("Nhập vào một số nguyên dương từ 1 đến 10: ");
        scanf("%d", &n);

        if (n >= 1 && n <= 10) {
            break;
        } else {
            printf("Số không hợp lệ! Vui lòng thử lại.\n");
        }
    }

    printf("Bảng cửu chương của %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
