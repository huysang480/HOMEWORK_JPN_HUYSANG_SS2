#include <stdio.h>

int main() {
    // Khai b�o v� kh?i t?o hai bi?n chi?u d�i v� chi?u r?ng
    int length = 10; // Chi?u d�i c?a h?nh ch? nh?t, gi? s? l� 10 ��n v?
    int width = 5;   // Chi?u r?ng c?a h?nh ch? nh?t, gi? s? l� 5 ��n v?

    // T�nh chu vi v� di?n t�ch h?nh ch? nh?t
    int perimeter = 2 * (length + width); // Chu vi = 2 * (chi?u d�i + chi?u r?ng)
    int area = length * width;           // Di?n t�ch = chi?u d�i * chi?u r?ng

    // In k?t qu? ra m�n h?nh
    printf("Chi?u d�i: %d\n", length);
    printf("Chi?u r?ng: %d\n", width);
    printf("Chu vi h?nh ch? nh?t: %d\n", perimeter);
    printf("Di?n t�ch h?nh ch? nh?t: %d\n", area);

    return 0;
}

