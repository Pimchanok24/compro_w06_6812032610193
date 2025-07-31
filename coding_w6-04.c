#include <stdio.h>

int main() {
    // --- Initialize variables with arbitrary values for demonstration ---
    // Using doubles for floating-point calculations to avoid precision issues
    // and match the 4.0, 6.5, 2.0 literals.
    double x_long_form, x_short_form;
    double total_long_form, total_short_form;
    double score_long_form, score_short_form;

    // Additional variables needed for some expressions
    int y = 5;
    int z = 3;
    int a = 2;
    double price = 10.0;
    int quantity = 5;
    double discount = 2.0;
    double rate = 10.0; // 10%
    double penalty = 3.0;
    int mistake = 1;

    printf("--- Comparing Long Form vs. Short-hand Expressions ---\n\n");

    // --- Expression 1: x = x - 4.0;  and  x -= 4.0; ---
    x_long_form = 10.0; // Initial value for comparison
    x_short_form = 10.0; // Same initial value

    printf("Expression 1: x = x - 4.0; / x -= 4.0;\n");
    printf("Initial x: %.2f\n", x_long_form);

    x_long_form = x_long_form - 4.0;
    x_short_form -= 4.0;

    printf("  Long Form Result (x):   %.2f\n", x_long_form);
    printf("  Short-hand Result (x):  %.2f\n", x_short_form);
    printf("  Results Match: %s\n\n", (x_long_form == x_short_form) ? "True" : "False");

    // --- Expression 2: x = 6.5 * x;  and  x *= 6.5; ---
    x_long_form = 5.0; // Reset initial value
    x_short_form = 5.0; // Reset initial value

    printf("Expression 2: x = 6.5 * x; / x *= 6.5;\n");
    printf("Initial x: %.2f\n", x_long_form);

    x_long_form = 6.5 * x_long_form;
    x_short_form *= 6.5;

    printf("  Long Form Result (x):   %.2f\n", x_long_form);
    printf("  Short-hand Result (x):  %.2f\n", x_short_form);
    printf("  Results Match: %s\n\n", (x_long_form == x_short_form) ? "True" : "False");

    // --- Expression 3: x = x % (y + z * a);  and  x %= (y + z * a); ---
    // Note: Modulo operator (%) requires integer operands.
    // So, we'll use integer variables for x here temporarily.
    int x_int_long_form = 25; // Reset initial value
    int x_int_short_form = 25; // Reset initial value

    printf("Expression 3: x = x %% (y + z * a); / x %%= (y + z * a);\n");
    printf("Initial x: %d, y: %d, z: %d, a: %d\n", x_int_long_form, y, z, a);
    int divisor_val = (y + z * a); // Calculate divisor once for clarity
    printf("  Divisor (y + z * a): %d\n", divisor_val);

    x_int_long_form = x_int_long_form % divisor_val;
    x_int_short_form %= divisor_val;

    printf("  Long Form Result (x):   %d\n", x_int_long_form);
    printf("  Short-hand Result (x):  %d\n", x_int_short_form);
    printf("  Results Match: %s\n\n", (x_int_long_form == x_int_short_form) ? "True" : "False");

    // Revert x to double for subsequent expressions
    x_long_form = (double)x_int_long_form;
    x_short_form = (double)x_int_short_form;


    // --- Expression 4: x = x / (2.0 * x);  and  x /= (2.0 * x); ---
    x_long_form = 8.0; // Reset initial value
    x_short_form = 8.0; // Reset initial value

    printf("Expression 4: x = x / (2.0 * x); / x /= (2.0 * x);\n");
    printf("Initial x: %.2f\n", x_long_form);

    // Be careful with the calculation (2.0 * x_long_form) on the right side.
    // The short-hand operator evaluates the right-hand side first, then performs the operation.
    // Example: If x = 8.0, then 2.0 * x = 16.0.
    // Long form: x = 8.0 / 16.0 = 0.5
    // Short-hand: x /= (2.0 * x) => x = x / (2.0 * x) => x = 8.0 / (2.0 * 8.0) = 8.0 / 16.0 = 0.5
    double divisor_val_4 = (2.0 * x_long_form); // Calculate divisor using the original x value

    x_long_form = x_long_form / (2.0 * x_long_form); // This will use the x_long_form value BEFORE assignment
    x_short_form /= (2.0 * x_short_form); // This will also use the x_short_form value BEFORE assignment

    printf("  Long Form Result (x):   %.2f\n", x_long_form);
    printf("  Short-hand Result (x):  %.2f\n", x_short_form);
    printf("  Results Match: %s\n\n", (x_long_form == x_short_form) ? "True" : "False");


    // --- Expression 5: total = total + (price * quantity - discount); and total += (price * quantity - discount); ---
    total_long_form = 100.0; // Reset initial value
    total_short_form = 100.0; // Reset initial value

    printf("Expression 5: total = total + (price * quantity - discount); / total += (price * quantity - discount);\n");
    printf("Initial total: %.2f, price: %.2f, quantity: %d, discount: %.2f\n", total_long_form, price, quantity, discount);
    double expression_val_5 = (price * quantity - discount);
    printf("  Expression (price * quantity - discount): %.2f\n", expression_val_5);

    total_long_form = total_long_form + expression_val_5;
    total_short_form += expression_val_5;

    printf("  Long Form Result (total):   %.2f\n", total_long_form);
    printf("  Short-hand Result (total):  %.2f\n", total_short_form);
    printf("  Results Match: %s\n\n", (total_long_form == total_short_form) ? "True" : "False");

    // --- Expression 6: x = x * (1 + rate / 100); and x *= (1 + rate / 100); ---
    x_long_form = 20.0; // Reset initial value
    x_short_form = 20.0; // Reset initial value

    printf("Expression 6: x = x * (1 + rate / 100); / x *= (1 + rate / 100);\n");
    printf("Initial x: %.2f, rate: %.2f\n", x_long_form, rate);
    double multiplier_val_6 = (1 + rate / 100);
    printf("  Multiplier (1 + rate / 100): %.2f\n", multiplier_val_6);

    x_long_form = x_long_form * multiplier_val_6;
    x_short_form *= multiplier_val_6;

    printf("  Long Form Result (x):   %.2f\n", x_long_form);
    printf("  Short-hand Result (x):  %.2f\n", x_short_form);
    printf("  Results Match: %s\n\n", (x_long_form == x_short_form) ? "True" : "False");

    // --- Expression 7: score = score - (penalty * (mistake + 1)); and score -= (penalty * (mistake + 1)); ---
    score_long_form = 50.0; // Reset initial value
    score_short_form = 50.0; // Reset initial value

    printf("Expression 7: score = score - (penalty * (mistake + 1)); / score -= (penalty * (mistake + 1));\n");
    printf("Initial score: %.2f, penalty: %.2f, mistake: %d\n", score_long_form, penalty, mistake);
    double deduction_val_7 = (penalty * (mistake + 1));
    printf("  Deduction (penalty * (mistake + 1)): %.2f\n", deduction_val_7);

    score_long_form = score_long_form - deduction_val_7;
    score_short_form -= deduction_val_7;

    printf("  Long Form Result (score):   %.2f\n", score_long_form);
    printf("  Short-hand Result (score):  %.2f\n", score_short_form);
    printf("  Results Match: %s\n\n", (score_long_form == score_short_form) ? "True" : "False");


    return 0;
}