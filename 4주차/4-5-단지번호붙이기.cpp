/*
1. 배열을 차례대로 돌면서 집이 있고, 아직 방문하지 않은 곳이 있으면 BFS 탐색을 시작한다.
2. BFS 탐색하며 방문한 배열은 단지 번호로 표시해주고, 같은 단지 집 수를 반환해 answer 배열에 넣어준다.
3. BFS 탐색을 한 번 할 때마다 단지 번호를 count해주고
4. BFS 탐색이 끝나면 다시 1에서 돌다가 남은 나머지 배열을 돌면서 탐색을 계속 해준다.
5. answer.size() = 단지 갯수, answer배열을 sort = 각 단지 내 집의 수
*/

#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int n;
int map[26][26];
int check[26][26];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int BFS(int x, int y, int num)
{
    int count = 0;
    queue<pair<int, int>> q;

    q.push(make_pair(x, y));
    check[x][y] = num;
    count++;

    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> next = make_pair(now.first + dx[i], now.second + dy[i]);
            if (next.first >= 0 && next.first < n && next.second >= 0 && next.second < n)
            {
                if (map[next.first][next.second] == 1 && check[next.first][next.second] == 0)
                {
                    check[next.first][next.second] = num;
                    count++;
                    q.push(next);
                }
            }
        }
    }

    return count;
}
int main()
{

    int num = 1;
    vector<int> answer;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1 && check[i][j] == 0)
            {
                answer.push_back(BFS(i, j, num));
                num++;
            }
        }
    }

    sort(answer.begin(), answer.end());
    cout << answer.size() << endl;
    for (int ans : answer)
    {
        cout << ans << endl;
    }

    return 0;
}