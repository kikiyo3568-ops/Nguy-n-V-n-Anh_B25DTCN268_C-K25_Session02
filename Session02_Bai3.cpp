#include <stdio.h>
int main() {
    int a = 20; // Bien so nguyen thu nhat
    int b = 5;  // Bien so nguyen thu hai

    int tong = a + b;     // Tong cua a va b
    int hieu = a - b;     // Hieu cua a va b
    int tich = a * b;     // Tich cua a va b
    int thuong = a / b;   // Thuong cua a va b (chia nguyen)

    // In ket qua ra man hinh
    printf("Tong: %d + %d = %d\n", a, b, tong);
    printf("Hieu: %d - %d = %d\n", a, b, hieu);
    printf("Tich: %d * %d = %d\n", a, b, tich);
    printf("Thuong: %d / %d = %d\n", a, b, thuong);

    return 0;
}

