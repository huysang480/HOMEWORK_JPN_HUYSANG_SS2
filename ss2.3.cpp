#include <stdio.h>

int main() {
    // Khai b�o v� kh?i t?o hai bi?n s? nguy�n
    int num1 = 15; // Bi?n num1 l�u gi� tr? s? nguy�n 15
    int num2 = 25; // Bi?n num2 l�u gi� tr? s? nguy�n 25

    // T�nh to�n c�c k?t qu?
    int sum = num1 + num2;       // Bi?n sum l�u t?ng c?a num1 v� num2
    int difference = num1 - num2; // Bi?n difference l�u hi?u c?a num1 v� num2
    int product = num1 * num2;    // Bi?n product l�u t�ch c?a num1 v� num2
    float quotient = (float)num1 / num2; // Bi?n quotient l�u th��ng c?a num1 v� num2 (�p ki?u sang float �? c� k?t qu? ch�nh x�c)

    // In k?t qu? ra m�n h?nh
    printf("T?ng c?a %d v� %d l�: %d\n", num1, num2, sum);
    printf("Hi?u c?a %d v� %d l�: %d\n", num1, num2, difference);
    printf("T�ch c?a %d v� %d l�: %d\n", num1, num2, product);
    printf("Th��ng c?a %d v� %d l�: %.2f\n", num1, num2, quotient);

    return 0;
}
