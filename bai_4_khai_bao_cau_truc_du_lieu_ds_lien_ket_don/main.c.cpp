struct SinhVien {
    char hoTen[100];
    char ma[20];
    float diem1;
    float diem2;
    float diem3;
};

struct Node {
    struct SinhVien sinhVien;
    struct Node *next;
};
