#include <stdio.h>

int main() {
    int dong, cot, i, j;
    float a[100][100];
    float (*p)[100] = a;

    printf("Nhap so dong va so cot (toi da 100): ");
    if (scanf("%d%d", &dong, &cot) != 2 ||
        dong < 1 || dong > 100 || cot < 1 || cot > 100) {
        printf("Kich thuoc mang khong hop le.\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < dong; i++) {
        for (j = 0; j < cot; j++) {
            printf("a[%d][%d] = ", i, j);
            if (scanf("%f", *(p + i) + j) != 1) {
                printf("Gia tri khong hop le.\n");
                return 1;
            }
        }
    }

    printf("Mang vua nhap:\n");
    for (i = 0; i < dong; i++) {
        for (j = 0; j < cot; j++) {
            printf("%.2f ", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}
