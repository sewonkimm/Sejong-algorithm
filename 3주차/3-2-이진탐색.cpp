/* 
1. 이진탐색 (start, end)
2. 찾고자 하는 원소가 없으면 n+1 출력
3. 찾고자 하는 원소가 맨 처음 등장하는 위치 출력
	- 중앙값보다 key 값이 작으면 왼쪽 탐색
	- 중앙값보다 key 값이 크면 오른쪽 탐색 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 입력
    int n, k;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }
    cin >> k;

    if (num[n - 1] < k)
    {
        cout << n + 1;
        return 0;
    }

    // 이진탐색
    int start, end, mid;
    start = 0;
    end = n - 1;

    while (start < end)
    {
        mid = (start + end) / 2;

        if (num[mid] == k)
        {
            cout << mid + 1;
            return 0;
        }

        if (k < num[mid])
        {
            end = mid - 1;
        }
        else if (k > num[mid])
        {
            start = mid + 1;
        }
    }

    if (start == end)
    {
        cout << start + 1;
        return 0;
    }
    cout << mid + 1;
    return 0;
}