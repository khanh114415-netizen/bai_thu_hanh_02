#include <stdio.h>

int main(void) {
    int n;
    int i;
    float mang[100];
    float *p;

    p = mang;

    printf("Nhap so phan tu (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap %d so thuc:\n", n);
    for (i = 0; i < n; i++) {
        printf("mang[%d] = ", i);

        if (scanf("%f", p + i) != 1) {
            printf("Gia tri khong hop le.\n");
            return 1;
        }
    }

    printf("Mang vua nhap: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(p + i));
    }

    printf("\n");
    return 0;
}
