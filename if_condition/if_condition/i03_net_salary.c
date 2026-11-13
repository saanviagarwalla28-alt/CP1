#include <stdio.h>

int main()
{
    float gross, allowances, deductions, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    if (gross > 10000)
    {
        allowances = gross * 10 / 100;
        deductions = gross * 3 / 100;
    }
    else if (gross > 5000)
    {
        allowances = gross * 7 / 100;
        deductions = gross * 2 / 100;
    }
    else
    {
        allowances = 0;
        deductions = 0;
    }
    net = gross + allowances - deductions;
    printf("Allowances = %.2f\n", allowances);
    printf("Deductions = %.2f\n", deductions);
    printf("Net salary = %.2f\n", net);
    return 0;
}
