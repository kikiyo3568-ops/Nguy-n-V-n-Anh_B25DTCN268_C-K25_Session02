#include <stdio.h>
#include <math.h> // Thu vien dung de tinh luy thua va can bac hai
int main() {
    int a = 2; // Bien a
    int b = 3; // Bien b
    int c = 4; // Bien c

    // Tinh gia tri cua bieu thuc
    float A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    // In ket qua ra man hinh
    printf("Gia tri cua bieu thuc A = a^3 + b^2 + 2c + sqrt(a + b - c) la: %.2f\n", A);

    return 0;
}

