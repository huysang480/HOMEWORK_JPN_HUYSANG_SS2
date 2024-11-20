#include <stdio.h>

int main() {
    // Khai báo và kh?i t?o hai bi?n chi?u dài và chi?u r?ng
    int length = 10; // Chi?u dài c?a h?nh ch? nh?t, gi? s? là 10 ðõn v?
    int width = 5;   // Chi?u r?ng c?a h?nh ch? nh?t, gi? s? là 5 ðõn v?

    // Tính chu vi và di?n tích h?nh ch? nh?t
    int perimeter = 2 * (length + width); // Chu vi = 2 * (chi?u dài + chi?u r?ng)
    int area = length * width;           // Di?n tích = chi?u dài * chi?u r?ng

    // In k?t qu? ra màn h?nh
    printf("Chi?u dài: %d\n", length);
    printf("Chi?u r?ng: %d\n", width);
    printf("Chu vi h?nh ch? nh?t: %d\n", perimeter);
    printf("Di?n tích h?nh ch? nh?t: %d\n", area);

    return 0;
}

