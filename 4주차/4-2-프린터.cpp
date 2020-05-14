/*
1. 큐에서 꺼낸다
2. 중요도 비교
3. 중요도 높은 게 없다 => 출력
4. 중요도 높은 게 있다 => 큐에 삽입
*/

/*
문제 바뀐 사항 => location에 숫자 대신 알파벳이 들어왔을 때
1) char loacation으로 입력 받고
2) location - 'a' (char를 숫자로 변환)


int main()
{
	int n;
	vector<int> priorities;
	char location;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int p;
		cin >> p;
		priorities.push_back(p);
	}
	cin >> location;
	cout << location - 'a';
	
	solution(priorities, location);
	
    return 0;
}
*/

#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{

    // 1. 큐 생성 (location - 중요도)
    queue<pair<int, int>> q;
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push(make_pair(i, priorities[i]));
    }

    int answer = 0;
    while (!q.empty())
    {
        // 2. 꺼낸다
        pair<int, int> now = q.front();
        q.pop();

        // 3. 중요도가 높은 문서가 있는지 검색
        bool flag = false; // false : 없다, true: 있다
        queue<pair<int, int>> tmp = q;
        while (!tmp.empty())
        {
            if (tmp.front().second > now.second)
            {
                flag = true;
                break;
            }
            tmp.pop();
        }

        if (!flag)
        { // 4. 없다 => 출력
            if (now.first == location)
            {
                return answer + 1;
            }
            else
            {
                answer += 1;
            }
        }
        else
        { // 4. 있다 => 맨 뒤에
            q.push(now);
        }
    }
}