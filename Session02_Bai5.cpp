#include <stdio.h>
int main() {
    int a = 10;       // Bien so nguyen thu nhat
    int b = 20;       // Bien so nguyen thu hai
    float c = 15.5f;  // Bien so thuc

    float tong_thuc = a + b + c; // Tong cua ca 3 so, luu vao bien float
    int tong_nguyen = a + b + (int)c; // Tong phan nguyen cua 3 so, luu vao bien int

    // In ket qua ra man hinh
    printf("Tong thuc cua %d, %d va %.2f la: %.2f\n", a, b, c, tong_thuc);
    printf("Tong phan nguyen cua %d, %d va %d la: %d\n", a, b, (int)c, tong_nguyen);

    return 0;
}

