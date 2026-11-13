#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
        printf("%c\n", str[i]);
    return 0;
}
