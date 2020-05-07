/* 
1. 자료구조 vector나 배열 이용
2. 처음부터 끝까지 비교하면서 최댓값을 찾기 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    for (int i = 0; i < 9; i++)
    {
        int n;
        cin >> n;
        num.push_back(n);
    }

    int index = 0;
    int max = num[0];
    for (int i = 1; i < num.size(); i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i + 1;
        }
    }

    cout << max << "\n"
         << index << endl;
    return 0;
}