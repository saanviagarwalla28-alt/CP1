#include <stdio.h>

int main()
{
    int n, i, flag;
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
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}
