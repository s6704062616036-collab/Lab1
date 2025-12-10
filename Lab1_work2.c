#include <stdio.h>
int main() {
    float p1, p2, p3;
    float Promotion_A, Promotion_B, Promotion_C;
    float Discount_A, Discount_B, Discount_C;

    scanf("%f", &p1);
    Discount_A = p1 * 0.05;
    Promotion_A = p1 - Discount_A;
    printf("Promotion A: Discount = %.2f, Pay = %.2f\n", Discount_A, Promotion_A);

    scanf("%f", &p2);
    Discount_B = p2 * 0.15;
    Promotion_B = p2 - Discount_B;
    printf("Promotion B: Discount = %.2f, Pay = %.2f\n", Discount_B, Promotion_B);

    scanf("%f", &p3);
    Discount_C = p3 * 0.30;
    Promotion_C = p3 - Discount_C;
    printf("Promotion C: Discount = %.2f, Pay = %.2f\n", Discount_C, Promotion_C);

    return 0;
}

