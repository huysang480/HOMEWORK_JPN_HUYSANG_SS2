#include <stdio.h>

int main() {
    // Khai báo và kh?i t?o bi?n c?nh h?nh vuông
    int side = 5; // Bi?n side lýu ð? dài c?nh h?nh vuông, gi? s? là 5 ðõn v?

    // Tính chu vi và di?n tích h?nh vuông
    int perimeter = 4 * side;   // Chu vi = 4 * ð? dài c?nh
    int area = side * side;     // Di?n tích = c?nh * c?nh

    // In k?t qu? ra màn h?nh
    printf("C?nh h?nh vuông: %d\n", side);
    printf("Chu vi h?nh vuông: %d\n", perimeter);
    printf("Di?n tích h?nh vuông: %d\n", area);

    return 0;
}

