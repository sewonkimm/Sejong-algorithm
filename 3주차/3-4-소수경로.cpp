/*
1. 에라토스테네스의 체 => 소수 구하기
2. 현재 상태에서 숫자하나만 바꿔서 만들 수 있는 소수&이전에 검사하지 않은 값을 큐에 넣는다.
3. check 배열에 몇 번 만에 도달했는지 값을 저장한다.
4. 원하는 값에 도달했을 때 check 값을 출력 
*/

#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

vector<int> Eratos(int n)
{
    vector<int> p(10000);

    if (n <= 1000)
    {
        return p;
    }

    for (int i = 2; i <= n; i++)
    {
        p[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (p[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                p[j] = false;
            }
        }
    }

    vector<int> arr;
    for (int i = 1000; i <= n; i++)
    {
        if (p[i])
        {
            arr.push_back(i);
        }
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, e;
        cin >> s >> e;

        vector<int> prime = Eratos(9999);
        vector<int> check(10000, 0);

        queue<string> q;
        q.push(s);
        check[stoi(s)] = 0;

        bool flag = false;
        while (!q.empty())
        {
            string now = q.front();
            q.pop();

            if (now == e)
            {
                cout << check[stoi(e)] << endl;
                flag = true;
                break;
            }

            for (int num : prime)
            {
                string str = to_string(num);

                int diff = 0;
                for (int i = 0; i < 4; i++)
                {
                    if (now[i] != str[i])
                    {
                        diff++;
                    }
                }

                if (diff == 1 && check[num] == 0)
                {
                    check[num] = check[stoi(now)] + 1;
                    q.push(str);
                }
            }
        }

        if (flag == false)
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}