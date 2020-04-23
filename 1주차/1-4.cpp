#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];
    int len;

    fgets(array, 100, stdin);

    len = strlen(array);
    for (int i = 0; i < len; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z') // 소문자일 때
        {
            array[i] = array[i] - 'a' + 'A'; // 대문자로 변경
        }
    }
    printf("%s\n", array);

    return 0;
}
