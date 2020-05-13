/*
1. 큐 생성 => BFS
2. map ( 단어 - 몇 번만에 만들 수 있는지 )
3. words 배열을 돌면서 한 글자 차이가 나고, 아직 방문하지 않은 배열은 큐에 집어넣고, 방문 체크.
3. 현재 검사중인 값이 target이랑 같을 때 종료.
*/

#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

bool isDiff(string w, string now)
{
    int diff = 0;
    for (int i = 0; i < w.size(); i++)
    {
        if (w[i] != now[i])
        {
            diff++;
        }
    }

    if (diff == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int solution(string begin, string target, vector<string> words)
{
    map<string, int> word;
    queue<pair<string, int>> q;
    q.push(make_pair(begin, 0));

    while (!q.empty())
    {
        string now = q.front().first;
        int count = q.front().second;
        q.pop();

        if (now == target)
        {
            return word[now];
        }

        for (string w : words)
        {
            if (isDiff(w, now) && word.find(w) == word.end())
            { // 한글자 차이 나고, 방문하지 않은 단어는 큐에 넣기
                word.insert(make_pair(w, count + 1));
                q.push(make_pair(w, count + 1));
            }
        }
    }

    return 0;
}