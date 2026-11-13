#include <stdio.h>

int main()
{
    int a[5], i, j, key, choice;
    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter 1 for ascending, 2 for descending: ");
    scanf("%d", &choice);
    for (i = 1; i < 5; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && ((choice == 1 && a[j] > key) || (choice == 2 && a[j] < key)))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Sorted array:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
