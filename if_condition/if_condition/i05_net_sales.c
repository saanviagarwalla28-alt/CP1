#include <stdio.h>

int main()
{
    float gross, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    if (gross > 20000)
        discount = gross * 15 / 100;
    else if (gross > 10000)
        discount = gross * 10 / 100;
    else
        discount = gross * 5 / 100;
    net = gross - discount;
    printf("Discount = %.2f\n", discount);
    printf("Net sales = %.2f\n", net);
    return 0;
}
