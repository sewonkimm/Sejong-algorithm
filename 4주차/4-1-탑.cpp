/*
1. 배열 reverse
2. i번째 탑을 검사할 때, (i+1)~(n-1)번째 요소 중 i번째 요소보다 값이 큰 것의 갯수를 answer 배열에 추가
3. answer 배열 reverse

// 통과 x
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    vector<int> top;
    vector<int> answer;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        top.push_back(tmp);
    }

    reverse(top.begin(), top.end());

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (top[j] >= top[i])
            {
                count++;
            }
        }
        answer.push_back(count);
    }

    reverse(answer.begin(), answer.end());
    for (int ans : answer)
    {
        cout << ans << " ";
    }
    return 0;
}