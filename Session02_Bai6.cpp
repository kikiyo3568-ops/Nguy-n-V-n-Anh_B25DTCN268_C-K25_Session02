#include <stdio.h>
int main() {
    int a = 4; // Bien a
    int b = 5; // Bien b
    int c = 3; // Bien c
    int d = 2; // Bien d

    int A = a * b - 2 * c + 3 * (a - d); // Tinh gia tri bieu thuc

    // In ket qua ra man hinh
    printf("Gia tri cua bieu thuc A = a * b - 2c + 3(a - d) la: %d\n", A);

    return 0;
}

