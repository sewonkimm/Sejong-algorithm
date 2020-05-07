/* 
1. 입력받기
2. DFS 수행 - 스택 or 재귀 
3. BFS 수행 - 큐 
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, v;
int node[1001][1001];
int checkDFS[1001];
int checkBFS[1001];

void DFS(int v)
{

    cout << v << " ";
    checkDFS[v] = 1;

    for (int i = 1; i <= n; i++)
    {
        int next = node[v][i];

        if (next && !checkDFS[i])
        {
            checkDFS[i] = 1;
            DFS(i);
        }
    }
    return;
}

void BFS(int v)
{

    queue<int> q;
    q.push(v);
    checkBFS[v] = 1;

    while (!q.empty())
    {
        int now = q.front();
        cout << now << " ";
        q.pop();

        for (int i = 1; i <= n; i++)
        {
            int next = node[now][i];

            if (next && !checkBFS[i])
            {
                q.push(i);
                checkBFS[i] = 1;
            }
        }
    }
    return;
}

int main()
{
    // 입력
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        node[a][b] = 1;
        node[b][a] = 1;
    }

    DFS(v);
    cout << "\n";
    BFS(v);

    return 0;
}