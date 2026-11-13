#include <stdio.h>

int main()
{
    int a[10], visited[10], i, j, count;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
        visited[i] = 0;
    }
    for (i = 0; i < 10; i++)
    {
        if (visited[i] == 0)
        {
            count = 1;
            for (j = i + 1; j < 10; j++)
            {
                if (a[j] == a[i])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d occurs %d time(s)\n", a[i], count);
        }
    }
    return 0;
}
