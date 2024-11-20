#include <stdio.h>

int main() {
    // Khai b�o h?ng s? PI v� b�n k�nh h?nh tr?n
    const float PI = 3.14;  // H?ng s? PI c� gi� tr? 3.14
    float radius = 7.0;     // B�n k�nh h?nh tr?n, gi? s? l� 7 ��n v?

    // T�nh chu vi v� di?n t�ch h?nh tr?n
    float circumference = 2 * PI * radius;  // Chu vi = 2 * PI * b�n k�nh
    float area = PI * radius * radius;      // Di?n t�ch = PI * b�n k�nh^2

    // In k?t qu? ra m�n h?nh
    printf("B�n k�nh h?nh tr?n: %.2f\n", radius);
    printf("Chu vi h?nh tr?n: %.2f\n", circumference);
    printf("Di?n t�ch h?nh tr?n: %.2f\n", area);

    return 0;
}

