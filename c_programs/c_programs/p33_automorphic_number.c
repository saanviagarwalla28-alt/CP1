#include <stdio.h>

int main()
{
    long int n, sq, temp, t2;
    int flag = 1;
    printf("Enter a number: ");
    scanf("%ld", &n);
    sq = n * n;
    temp = n;
    t2 = sq;
    while (temp > 0)
    {
        if (temp % 10 != t2 % 10)
        {
            flag = 0;
            break;
        }
        temp = temp / 10;
        t2 = t2 / 10;
    }
    if (flag == 1)
        printf("%ld is an automorphic number\n", n);
    else
        printf("%ld is not an automorphic number\n", n);
    return 0;
}
