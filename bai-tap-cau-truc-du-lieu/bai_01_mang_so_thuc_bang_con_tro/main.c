#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    float *arr;

    printf("Nhap so phan tu n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("n phai la so nguyen duong.\n");
        return 1;
    }

    arr = (float *)malloc((size_t)n * sizeof(float));
    if (arr == NULL) {
        printf("Khong du bo nho de cap phat mang.\n");
        return 1;
    }

    printf("Nhap %d so thuc:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("arr[%d] = ", i);
        if (scanf("%f", arr + i) != 1) {
            printf("Du lieu khong hop le.\n");
            free(arr);
            return 1;
        }
    }

    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; ++i) {
        printf("%.2f", *(arr + i));
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    free(arr);
    return 0;
}
