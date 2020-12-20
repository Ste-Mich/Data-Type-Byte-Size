#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("The byte size of the following types is: \n");

    printf("char: %u          \n", sizeof(char));
    printf("short: %u         \n", sizeof(int));
    printf("int: %u           \n", sizeof(int));
    printf("long: %u          \n", sizeof(long));
    printf("long long: %u     \n", sizeof(long long));
    printf("float: %u         \n", sizeof(float));
    printf("double: %u        \n", sizeof(double));
    printf("long double: %i   \n", sizeof(long double));

    return 0;
}