#include <stdio.h>
int main() {
    int chieu_dai = 10; // Chieu dai cua hinh chu nhat
    int chieu_rong = 5; // Chieu rong cua hinh chu nhat

    int chu_vi = 2 * (chieu_dai + chieu_rong); // Tinh chu vi
    int dien_tich = chieu_dai * chieu_rong;   // Tinh dien tich

    // In ket qua ra man hinh
    printf("Chieu dai: %d\n", chieu_dai);
    printf("Chieu rong: %d\n", chieu_rong);
    printf("Chu vi hinh chu nhat: %d\n", chu_vi);
    printf("Dien tich hinh chu nhat: %d\n", dien_tich);

    return 0;
}


