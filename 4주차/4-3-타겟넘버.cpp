/*
DFS, 재귀
1. 0~(n-1)까지 n개의 배열의 원소를 1)더하고, 다음 재귀로 넘긴다. 2)빼고, 다음 재귀로 넘긴다.
2. 마지막 배열의 원소까지 계산이 끝나면 sum이 target과 같은지 확인한다.
3. target과 같으면 count+1 해주고 return
4. DFS 재귀가 모두 끝나면 count 값을 출력

// 통과 x
*/

#include <vector>
using namespace std;

int count = 0;

void dfs(vector<int> numbers, int i, int sum, int target)
{

    // 종료
    if (i == numbers.size())
    {
        if (sum == target)
        {
            count++;
        }
        return;
    }

    dfs(numbers, i + 1, sum + numbers[i], target);
    dfs(numbers, i - 1, sum - numbers[i], target);
}

int solution(vector<int> numbers, int target)
{
    dfs(numbers, 0, 0, target);
    return count;
}