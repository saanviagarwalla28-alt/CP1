#include <stdio.h>

int main()
{
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount, i, count;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    for (i = 0; i < 9; i++)
    {
        count = amount / notes[i];
        if (count > 0)
        {
            printf("%d note(s) of %d Rs.\n", count, notes[i]);
            amount = amount % notes[i];
        }
    }
    return 0;
}
