#include <stdio.h>

int main() {
    int x = 12;
    int y = 7;
    int z = 12;

    printf("--- Relational & Logical Operators Expressions ---\n");
    printf("Given: x = %d, y = %d, z = %d\n\n", x, y, z);

    // Expression 1: x > y
    printf("1. x > y       : %d (%s)\n", x > y, (x > y) ? "True" : "False");

    // Expression 2: x < z
    printf("2. x < z       : %d (%s)\n", x < z, (x < z) ? "True" : "False");

    // Expression 3: x == z
    printf("3. x == z      : %d (%s)\n", x == z, (x == z) ? "True" : "False");

    // Expression 4: x != y
    printf("4. x != y      : %d (%s)\n", x != y, (x != y) ? "True" : "False");

    // Expression 5: !(1+2*5 >= y) || (5 != (5/3))
    // Let's break this down:
    // (1+2*5 >= y)  -> (1+10 >= 7) -> (11 >= 7) -> True (1)
    // (5/3)         -> 1 (integer division)
    // (5 != (5/3))  -> (5 != 1) -> True (1)
    // !(True) || (True) -> False || True -> True (1)
    printf("5. !(1+2*5 >= y) || (5 != (5/3)): %d (%s)\n", !(1+2*5 >= y) || (5 != (5/3)), (!(1+2*5 >= y) || (5 != (5/3))) ? "True" : "False");

    // Expression 6: !(x < y)
    printf("6. !(x < y)    : %d (%s)\n", !(x < y), (!(x < y)) ? "True" : "False");

    // Expression 7: (x > y) && (z * 2)
    // In C, non-zero values are considered true in a boolean context.
    // (x > y) is (12 > 7) which is True (1)
    // (z * 2) is (12 * 2) which is 24 (non-zero, thus True)
    // True && True -> True (1)
    printf("7. (x > y) && (z * 2): %d (%s)\n", (x > y) && (z * 2), ((x > y) && (z * 2)) ? "True" : "False");

    // Expression 8: (x %% 2 == 0) || (y %% 2 == 1)
    // (x % 2 == 0) -> (12 % 2 == 0) -> (0 == 0) -> True (1)
    // (y % 2 == 1) -> (7 % 2 == 1) -> (1 == 1) -> True (1)
    // True || True -> True (1)
    printf("8. (x %% 2 == 0) || (y %% 2 == 1): %d (%s)\n", (x % 2 == 0) || (y % 2 == 1), ((x % 2 == 0) || (y % 2 == 1)) ? "True" : "False");

    // Expression 9: (x > y) && (z < y)
    // (x > y) -> (12 > 7) -> True (1)
    // (z < y) -> (12 < 7) -> False (0)
    // True && False -> False (0)
    printf("9. (x > y) && (z < y): %d (%s)\n", (x > y) && (z < y), ((x > y) && (z < y)) ? "True" : "False");

    return 0;
}