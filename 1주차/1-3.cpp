#include <stdio.h>

int main()
{
    char array[100];

    fgets(array, 100, stdin);
    printf("array value is %s\n", array);

    return 0;
}
