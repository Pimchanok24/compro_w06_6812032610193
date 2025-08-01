#include <stdio.h>

int main() {
    double x = 1.0, y = 2.0, z;  // กำหนดค่าเริ่มต้น x = 1.0, y = 2.0
    x = y + 5.0;                 // x = 2.0 + 5.0 = 7.0
    y = x / 2.0;                 // y = 7.0 / 2.0 = 3.5
    y = (x * 3.0) + 4.0;         // y = (7.0 * 3.0) + 4.0 = 21.0 + 4.0 = 25.0
    x = -0.5 - y;                // x = -0.5 - 25.0 = -25.5
    z = x + y;                   // z = -25.5 + 25.0 = -0.5

    // แสดงผลลัพธ์
    printf("w06-02-02:\n");
    printf("x = %.1f, y = %.1f, z = %.1f\n", x, y, z);

    return 0;
}