/*

1. sort로 문자열 정렬 - cmp 함수
2. 중복되는 값 삭제

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(const string &a, const string &b)
{

    if (a.size() == b.size())
    {
        return (a < b);
    }
    return (a.size() < b.size());
}

int main()
{

    // input
    int n;
    cin >> n;

    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    // sort
    sort(str.begin(), str.end(), cmp);

    // 중복 삭제
    cout << str[0] << endl;
    string last = str[0];
    for (int i = 1; i < n; i++)
    {
        if (str[i] == last)
        {
            continue;
        }
        else
        {
            cout << str[i] << endl;
            last = str[i];
        }
    }

    return 0;
}

/*

중복 처리에 map 사용한 코드

*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int> &b)
{
    if (a.second == b.second)
    {
        return (a.first < b.first);
    }
    return (a.second < b.second);
}

int main()
{
    int n;
    vector<pair<string, int>> words; // 단어, 단어의 길이

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        words.push_back(make_pair(str, str.size()));
    }

    sort(words.begin(), words.end(), cmp);

    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m[words[i].first] > 0)
        {
            continue;
        }
        else
        {
            m[words[i].first]++;
        }
        cout << words[i].first << endl;
    }

    return 0;
}