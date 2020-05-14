/*
1. top 배열 입력 받기
2. i번째 탑을 검사할 때, (i+1)~(n-1)번째 요소 중 i번째 요소보다 값이 큰 요소가 나오면
3. 맨 처음 나온 탑의 번호를 answer 배열에 추가

// 통과 x
시간 복잡도가 O(N^2)으로 시간초과가 나온다.
stack으로 다시 풀기
*/

#include <stdio.h>
#include <vector>

using namespace std;

int main()
{

    int n;
    vector<int> top;
    vector<int> answer;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        top.push_back(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i-1; j >= 0; j--)
        {
            if (top[j] >= top[i])
            {
                answer.push_back(j+1);
                flag = true;
                break;
            }
        }

        if(!flag){
            answer.push_back(0);
        }
    }

    for (int ans : answer)
    {
        printf("%d ", ans);
    }
    return 0;
}