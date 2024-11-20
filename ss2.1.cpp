#include <stdio.h>

int main() {
    // Ki�u s� nguy�n (integer)
    int a = 10; // Bi�n 'a' luu tri s� nguy�n. D�ng d� luu c�c s� nguy�n nhu 1, 2, -5.

    // Ki�u s�  thuc (floating-point)
    float b = 3.14; // Bi�n 'b' luu tri so thuc d?u ch?m d?ng, d�ng cho c�c s? th?p ph�n nhu 3.14, -0.25.

    // Ki?u s? th?c c� d? ch�nh x�c cao hon (double)
    double c = 2.71828; // Bi?n 'c' luu s? th?c v?i d? ch�nh x�c cao hon 'float', thu?ng d�ng cho c�c t�nh to�n khoa h?c.

    // Ki?u k� t? (character)
    char d = 'X'; // Bi?n 'd' luu tr? m?t k� t?. K� t? du?c d?t trong d?u nh�y don.

    // Ki?u logic (boolean - s? d?ng thu vi?n <stdbool.h>)
    #include <stdbool.h>
    bool e = true; // Bi?n 'e' luu gi� tr? logic, ch? c� th? l� true ho?c false.

    // Ki?u s? nguy�n kh�ng d?u (unsigned integer)
    unsigned int f = 50; // Bi?n 'f' luu tr? s? nguy�n duong (kh�ng ch?a gi� tr? �m).

    // Ki?u s? nguy�n d�i (long integer)
    long g = 1000000; // Bi?n 'g' luu tr? s? nguy�n l?n hon ki?u int.

    // Ki?u s? nguy�n ng?n (short integer)
    short h = 32000; // Bi?n 'h' luu tr? s? nguy�n nh? hon ki?u int.

    // In c�c gi� tr? ra m�n h�nh
    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("double: %lf\n", c);
    printf("char: %c\n", d);
    printf("bool: %d\n", e); // true du?c in ra l� 1, false l� 0.
    printf("unsigned int: %u\n", f);
    printf("long: %ld\n", g);
    printf("short: %d\n", h);

    return 0;
} 

