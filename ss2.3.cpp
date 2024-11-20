#include <stdio.h>

int main() {
    // Khai báo và kh?i t?o hai bi?n s? nguyên
    int num1 = 15; // Bi?n num1 lýu giá tr? s? nguyên 15
    int num2 = 25; // Bi?n num2 lýu giá tr? s? nguyên 25

    // Tính toán các k?t qu?
    int sum = num1 + num2;       // Bi?n sum lýu t?ng c?a num1 và num2
    int difference = num1 - num2; // Bi?n difference lýu hi?u c?a num1 và num2
    int product = num1 * num2;    // Bi?n product lýu tích c?a num1 và num2
    float quotient = (float)num1 / num2; // Bi?n quotient lýu thýõng c?a num1 và num2 (ép ki?u sang float ð? có k?t qu? chính xác)

    // In k?t qu? ra màn h?nh
    printf("T?ng c?a %d và %d là: %d\n", num1, num2, sum);
    printf("Hi?u c?a %d và %d là: %d\n", num1, num2, difference);
    printf("Tích c?a %d và %d là: %d\n", num1, num2, product);
    printf("Thýõng c?a %d và %d là: %.2f\n", num1, num2, quotient);

    return 0;
}
