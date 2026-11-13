#include <stdio.h>

int main()
{
    int n, i;
    long int fact = 1;   /* works correctly up to 12! */
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("Factorial of %d = %ld\n", n, fact);
    return 0;
}
