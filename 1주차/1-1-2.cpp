#include <stdio.h>

using namespace std;

// 재귀로 구현
// n의 범위가 커지면 재귀는 비효율적일 수 있음
int plus(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + plus(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", plus(n));

    return 0;
}
