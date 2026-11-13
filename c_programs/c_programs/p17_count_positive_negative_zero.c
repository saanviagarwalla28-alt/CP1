#include <stdio.h>

int main()
{
    int i, pos = 0, neg = 0, zero = 0;
    float x;
    for (i = 1; i <= 200; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%f", &x);
        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive = %d\nNegative = %d\nZeroes = %d\n", pos, neg, zero);
    return 0;
}
