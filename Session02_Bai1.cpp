#include <stdio.h>

int main() {
    short a = 10; // short: so nguyen nho, 2 byte
    int b = 100; // int: so nguyen thong thuong, 4 byte
    long c = 1000L; // long: so nguyen lon hon int, 4 hoac 8 byte tuy he thong
    long long d = 10000LL; // long long: so nguyen rat lon, 8 byte

    unsigned short e = 20; // unsigned short: so nguyen khong am nho, 2 byte
    unsigned int f = 200; // unsigned int: so nguyen khong am thong thuong, 4 byte
    unsigned long g = 2000UL; // unsigned long: so nguyen khong am lon hon int, 4 hoac 8 byte
    unsigned long long h = 20000ULL; // unsigned long long: so nguyen khong am rat lon, 8 byte

    char i = 'A'; // char: ky tu, 1 byte

    // In gia tri cac bien
    printf("short a = %d\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);

    printf("unsigned short e = %hu\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);

    printf("char i = %c\n", i);

    return 0;
}
