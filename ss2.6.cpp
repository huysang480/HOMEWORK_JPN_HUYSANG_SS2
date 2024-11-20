#include <stdio.h>

int main() {
    // Khai báo h?ng s? PI và bán kính h?nh tr?n
    const float PI = 3.14;  // H?ng s? PI có giá tr? 3.14
    float radius = 7.0;     // Bán kính h?nh tr?n, gi? s? là 7 ðõn v?

    // Tính chu vi và di?n tích h?nh tr?n
    float circumference = 2 * PI * radius;  // Chu vi = 2 * PI * bán kính
    float area = PI * radius * radius;      // Di?n tích = PI * bán kính^2

    // In k?t qu? ra màn h?nh
    printf("Bán kính h?nh tr?n: %.2f\n", radius);
    printf("Chu vi h?nh tr?n: %.2f\n", circumference);
    printf("Di?n tích h?nh tr?n: %.2f\n", area);

    return 0;
}

