#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    result = strcmp(str1, str2);
    if (result > 0)
        printf("First string is greater\n");
    else if (result < 0)
        printf("First string is lower\n");
    else
        printf("Both strings are same\n");
    return 0;
}
