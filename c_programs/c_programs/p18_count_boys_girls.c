#include <stdio.h>

int main()
{
    int i, boys = 0, girls = 0;
    char code;
    for (i = 1; i <= 50; i++)
    {
        printf("Enter sex code of student %d (M/F): ", i);
        scanf(" %c", &code);
        if (code == 'M' || code == 'm')
            boys++;
        else if (code == 'F' || code == 'f')
            girls++;
    }
    printf("Boys = %d\nGirls = %d\n", boys, girls);
    return 0;
}
