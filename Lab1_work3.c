#include <stdio.h>
int main() {
    float p1, p2, p3;
    float Promotion_A, Promotion_B, Promotion_C;
    float Discount_A, Discount_B, Discount_C;

 
    scanf("%f", &p1);
    Discount_A = p1 * 0.05;
    Promotion_A = (p1 - Discount_A) * 1.07;  // ??? VAT
    printf("Promotion A: Pay = %.2f\n", Promotion_A);


    scanf("%f", &p2);
    Discount_B = (p1 + p2) * 0.15;
    Promotion_B = ((p1 + p2) - Discount_B) * 1.07;
    printf("Promotion B: Pay = %.2f\n", Promotion_B);

   
    scanf("%f", &p3);
    Discount_C = (p1 + p2 + p3) * 0.30;
    Promotion_C = ((p1 + p2 + p3) - Discount_C) * 1.07;
    printf("Promotion C: Pay = %.2f\n", Promotion_C);

    return 0;
}
