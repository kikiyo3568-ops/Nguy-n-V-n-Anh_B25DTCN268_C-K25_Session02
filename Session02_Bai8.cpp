#include <stdio.h>
#include <math.h> // Thu vien toan hoc, duoc su dung neu can
int main() {
    int number = 12345; // So ban dau
    int digit1 = number % 10;           // Lay chu so cuoi: 5
    number = number / 10;               // Bo chu so cuoi: 1234

    int digit2 = number % 10;           // Lay chu so cuoi: 4
    number = number / 10;               // Bo chu so cuoi: 123

    int digit3 = number % 10;           // Lay chu so cuoi: 3
    number = number / 10;               // Bo chu so cuoi: 12

    int digit4 = number % 10;           // Lay chu so cuoi: 2
    number = number / 10;               // Bo chu so cuoi: 1

    int digit5 = number % 10;           // Lay chu so cuoi: 1

    // Ghep cac chu so lai theo thu tu nguoc
    int result = digit1 * 10000 + digit2 * 1000 + digit3 * 100 + digit4 * 10 + digit5;

    // In ket qua
    printf("So dao nguoc la: %d\n", result);

    return 0;
}


