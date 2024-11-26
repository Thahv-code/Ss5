#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhập vào một số nguyên dương: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương!\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Tổng các số từ 1 đến %d là: %d\n", n, sum);
    }

    return 0;
}
