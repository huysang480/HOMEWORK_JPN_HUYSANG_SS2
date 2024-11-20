#include <stdio.h>

int main() {
    // Kiêu sô nguyên (integer)
    int a = 10; // Biên 'a' luu tri sô nguyên. Dùng dê luu các sô nguyên nhu 1, 2, -5.

    // Kiêu sô  thuc (floating-point)
    float b = 3.14; // Biên 'b' luu tri so thuc d?u ch?m d?ng, dùng cho các s? th?p phân nhu 3.14, -0.25.

    // Ki?u s? th?c có d? chính xác cao hon (double)
    double c = 2.71828; // Bi?n 'c' luu s? th?c v?i d? chính xác cao hon 'float', thu?ng dùng cho các tính toán khoa h?c.

    // Ki?u ký t? (character)
    char d = 'X'; // Bi?n 'd' luu tr? m?t ký t?. Ký t? du?c d?t trong d?u nháy don.

    // Ki?u logic (boolean - s? d?ng thu vi?n <stdbool.h>)
    #include <stdbool.h>
    bool e = true; // Bi?n 'e' luu giá tr? logic, ch? có th? là true ho?c false.

    // Ki?u s? nguyên không d?u (unsigned integer)
    unsigned int f = 50; // Bi?n 'f' luu tr? s? nguyên duong (không ch?a giá tr? âm).

    // Ki?u s? nguyên dài (long integer)
    long g = 1000000; // Bi?n 'g' luu tr? s? nguyên l?n hon ki?u int.

    // Ki?u s? nguyên ng?n (short integer)
    short h = 32000; // Bi?n 'h' luu tr? s? nguyên nh? hon ki?u int.

    // In các giá tr? ra màn hình
    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("double: %lf\n", c);
    printf("char: %c\n", d);
    printf("bool: %d\n", e); // true du?c in ra là 1, false là 0.
    printf("unsigned int: %u\n", f);
    printf("long: %ld\n", g);
    printf("short: %d\n", h);

    return 0;
} 

