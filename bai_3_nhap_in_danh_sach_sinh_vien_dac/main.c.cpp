#include <stdio.h>

struct SinhVien {
    char hoTen[50];
    char ma[20];
    float diem1, diem2, diem3;
};

int main() {
    struct SinhVien ds[50];
    struct SinhVien *q;
    int n;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    for (q = ds; q < ds + n; q++) {
        printf("\nHo ten: ");
        scanf(" %49[^\n]", q->hoTen);

        printf("Ma sinh vien: ");
        scanf("%19s", q->ma);

        printf("Nhap diem 1, diem 2, diem 3: ");
        scanf("%f%f%f", &q->diem1, &q->diem2, &q->diem3);
    }

    printf("\nDANH SACH SINH VIEN\n");
    for (q = ds; q < ds + n; q++) {
        printf("\nHo ten: %s\n", q->hoTen);
        printf("Ma sinh vien: %s\n", q->ma);
        printf("Diem 1: %.2f\n", q->diem1);
        printf("Diem 2: %.2f\n", q->diem2);
        printf("Diem 3: %.2f\n", q->diem3);
    }

    return 0;
}
