#include <stdio.h>

int main() {
    // Khai b�o v� kh?i t?o bi?n c?nh h?nh vu�ng
    int side = 5; // Bi?n side l�u �? d�i c?nh h?nh vu�ng, gi? s? l� 5 ��n v?

    // T�nh chu vi v� di?n t�ch h?nh vu�ng
    int perimeter = 4 * side;   // Chu vi = 4 * �? d�i c?nh
    int area = side * side;     // Di?n t�ch = c?nh * c?nh

    // In k?t qu? ra m�n h?nh
    printf("C?nh h?nh vu�ng: %d\n", side);
    printf("Chu vi h?nh vu�ng: %d\n", perimeter);
    printf("Di?n t�ch h?nh vu�ng: %d\n", area);

    return 0;
}

