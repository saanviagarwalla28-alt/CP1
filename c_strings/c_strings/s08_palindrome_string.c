#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    j = 0;
    for (i = len - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    if (strcmp(str, rev) == 0)
        printf("%s is a palindrome string\n", str);
    else
        printf("%s is not a palindrome string\n", str);
    return 0;
}
