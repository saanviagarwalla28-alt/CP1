#include <stdio.h>

int main()
{
    int i;
    float x, largest, smallest;
    printf("Enter number 1: ");
    scanf("%f", &x);
    largest = x;
    smallest = x;
    for (i = 2; i <= 100; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &x);
        if (x > largest)
            largest = x;
        if (x < smallest)
            smallest = x;
    }
    printf("Largest = %.2f\nSmallest = %.2f\n", largest, smallest);
    return 0;
}
