// Write a program that will calculate the price for a quantity entered from the keyboard, given
// that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
// percent discount for quantities over 50.



#include <stdio.h>

int main() {
    int qty;
    float amount, discount = 0.0, total;

    printf("Enter quantity: ");
    scanf("%d", &qty);

    amount = qty * 5.0;  // unit price Rs 5

    // Determine discount
    if (qty > 50)
        discount = 0.15 * amount;
    else if (qty > 30)
        discount = 0.10 * amount;

    total = amount - discount;

    printf("Amount before discount: Rs %.2f\n", amount);
    printf("Discount: Rs %.2f\n", discount);
    printf("Total amount to pay: Rs %.2f\n", total);

    return 0;
}