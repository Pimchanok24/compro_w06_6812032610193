#include <stdio.h>

int main() {
    // Declare variables to store the results
    int A, B, C, D, E, F, G;

    printf("--- Order of Evaluation in C Expressions ---\n\n");

    // Expression A: A = -2 + 5 * 2;
    // Precedence: Multiplication (*) first, then Addition (+)
    // -2 + (5 * 2) => -2 + 10 => 8
    A = -2 + 5 * 2;
    printf("A = -2 + 5 * 2;       Result: %d\n", A);

    // Expression B: B = 10 / 2 * 3;
    // Precedence: Division (/) and Multiplication (*) have the same precedence.
    // Associativity: Left-to-right.
    // (10 / 2) * 3 => 5 * 3 => 15
    B = 10 / 2 * 3;
    printf("B = 10 / 2 * 3;       Result: %d\n", B);

    // Expression C: C = 6 / 2 + 3 * (4 % 2);
    // Precedence: Modulo (%), then Division (/) and Multiplication (*), then Addition (+)
    // (4 % 2) => 0
    // 6 / 2 => 3
    // 3 * 0 => 0
    // 3 + 0 => 3
    C = 6 / 2 + 3 * (4 % 2);
    printf("C = 6 / 2 + 3 * (4 %% 2); Result: %d\n", C); // %% is used to print a literal %

    // Expression D: D = (5 + 2) * 15 % 4;
    // Precedence: Parentheses (()) first, then Multiplication (*), then Modulo (%)
    // Associativity: Left-to-right for * and %
    // (5 + 2) => 7
    // 7 * 15 => 105
    // 105 % 4 => 1 (105 = 26 * 4 + 1)
    D = (5 + 2) * 15 % 4;
    printf("D = (5 + 2) * 15 %% 4;   Result: %d\n", D);

    // Expression E: E = 6 + 2 + 2 - 6 / 2;
    // Precedence: Division (/) first, then Additions (+) and Subtractions (-) from left-to-right.
    // 6 / 2 => 3
    // 6 + 2 => 8
    // 8 + 2 => 10
    // 10 - 3 => 7
    E = 6 + 2 + 2 - 6 / 2;
    printf("E = 6 + 2 + 2 - 6 / 2;  Result: %d\n", E);

    // Expression F: F = 5 + 3 * 2 - 8 / 4 + (6 % 5);
    // Precedence: Parentheses (%), then *, /, %, then +, -
    // (6 % 5) => 1
    // 3 * 2 => 6
    // 8 / 4 => 2
    // 5 + 6 - 2 + 1 => 11 - 2 + 1 => 9 + 1 => 10
    F = 5 + 3 * 2 - 8 / 4 + (6 % 5);
    printf("F = 5 + 3 * 2 - 8 / 4 + (6 %% 5); Result: %d\n", F);

    // Expression G: G = (4 + 3) * 2 - 10 / (2 + 3);
    // Precedence: Parentheses (()), then *, /, then +,-
    // (4 + 3) => 7
    // (2 + 3) => 5
    // 7 * 2 => 14
    // 10 / 5 => 2
    // 14 - 2 => 12
    G = (4 + 3) * 2 - 10 / (2 + 3);
    printf("G = (4 + 3) * 2 - 10 / (2 + 3); Result: %d\n", G);

    return 0;
}