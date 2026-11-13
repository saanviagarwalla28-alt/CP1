#include <stdio.h>

int main()
{
    int n, i, flag, sum = 0;
    for (n = 2; n <= 500; n++)
    {
        flag = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            sum = sum + n;
    }
    printf("Sum of prime numbers between 1 and 500 = %d\n", sum);
    return 0;
}
