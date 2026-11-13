#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
    printf("Lower case: %s\n", str);
    return 0;
}
