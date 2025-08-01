#include <stdio.h>

int main() {
    // กำหนดตัวแปร a, b เป็น int และ c, d เป็น float
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าเริ่มต้นของตัวแปรทั้งหมด
    printf("a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);

    // 2. ผลการคำนวณของ d + a
    printf("d + a = %.1f\n", d + a); // 4.0 + 5 = 9.0

    // 3. ผลการคำนวณของ a - b
    printf("a - b = %d\n", a - b); // 5 - 17 = -12

    // 4. ผลการคำนวณของ c * d
    printf("c * d = %.2f\n", c * d); // 8.5 * 4.0 = 34.00

    // 5. ผลการคำนวณของ a * c
    printf("a * c = %.2f\n", a * c); // 5 * 8.5 = 42.50

    // 6. ผลการคำนวณของ c / d
    printf("c / d = %.2f\n", c / d); // 8.5 / 4.0 = 2.125

    // 7. ผลการคำนวณของ b / c
    printf("b / c = %.2f\n", b / c); // 17 / 8.5 = 2.00

    // 8. ผลการคำนวณของ a % b
    printf("a %% b = %d\n", a % b); // 5 % 17 = 5

    // 9. ผลการคำนวณของ b % a
    printf("b %% a = %d\n", b % a); // 17 % 5 = 2

    // 10. ผลการคำนวณของ c % d -> จะเกิด error เพราะ float ห้ามใช้ %
    // printf("c %% d = %.2f\n", c % d); 
    // ↑ บรรทัดนี้จะ error เพราะ % ใช้ได้เฉพาะ int เท่านั้น
    // วิธีแก้: แปลง c และ d เป็น int ก่อน
    printf("(int)c %% (int)d = %d\n", (int)c % (int)d); // 8 % 4 = 0

    return 0;
}