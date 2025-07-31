#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;

    int r1 = a++ * b + (int)y % 3;
    // a++ = 5 (ใช้ก่อนเพิ่ม), b = 2 → 5 * 2 = 10
    // (int)y = 4 → 4 % 3 = 1 → 10 + 1 = 11
    printf("r1 = %d\n", r1);

    int r2 = (a > b) && ((int)x / b < 2);
    // a ตอนนี้เป็น 6 (เพราะ a++ ก่อนหน้านี้), b = 2 → 6 > 2 = true (1)
    // (int)x = 3 → 3 / 2 = 1 → 1 < 2 = true (1)
    // r2 = 1 && 1 = 1
    printf("r2 = %d\n", r2);

    float r3 = ++x * y - a / 2;
    // ++x = 4.0, y = 4.5 → 4.0 * 4.5 = 18.0
    // a = 6 → 6 / 2 = 3 → 18.0 - 3 = 15.0
    printf("r3 = %.2f\n", r3);

    float r4 = ((x += 1.5) > y) || (b-- > 0);
    // x = 4.0 → x += 1.5 = 5.5, y = 4.5 → 5.5 > 4.5 = true (1)
    // true || ... = true → ไม่ต้องประเมิน b--
    printf("r4 = %.2f\n", r4);

    return 0;
}