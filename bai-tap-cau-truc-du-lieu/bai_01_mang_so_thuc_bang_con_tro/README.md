# Bài 01: Nhập và in mảng số thực bằng con trỏ

## Đề bài

Viết chương trình C sử dụng con trỏ để nhập và in một mảng một chiều gồm `n` số thực.

## Ý tưởng

1. Nhập số lượng phần tử `n` và kiểm tra `n > 0`.
2. Dùng `malloc` cấp phát vùng nhớ cho `n` số thực.
3. Nhập từng phần tử bằng địa chỉ `arr + i`.
4. In phần tử bằng cách giải tham chiếu `*(arr + i)`.
5. Giải phóng vùng nhớ bằng `free`.

## Sơ đồ khối

Xem [flowchart.png](flowchart.png).

## Biên dịch và chạy

```bash
gcc main.c -o main
./main
```

Trên Windows dùng MinGW:

```bash
gcc main.c -o main.exe
main.exe
```

## Ví dụ

```text
Nhap so phan tu n: 3
Nhap 3 so thuc:
arr[0] = 1.5
arr[1] = -2
arr[2] = 4.25
Mang vua nhap la: 1.50 -2.00 4.25
```

## Ghi chú về con trỏ

- `arr + i` là địa chỉ của phần tử thứ `i`.
- `scanf("%f", arr + i)` ghi số thực vào địa chỉ đó.
- `*(arr + i)` lấy giá trị tại địa chỉ đó; cách viết tương đương là `arr[i]`.
- Chương trình dùng chỉ số bắt đầu từ `0`, như quy ước của C.
