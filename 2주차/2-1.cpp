/*
1. int vector 2개에 n개 정수 입력받기
2. n까지 루프돌면서 bit 연산
    - 모듈러 연산 %2 했을 때 0이면 공백, 1이면 # 넣기 (비트 연산자 |, <<, >> 사용 연습)
    - reverse 메소드 수행 후 return vector에 넣어준다.
3. 2를 n번 반복
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        string str = "";
        int tmp = arr1[i] | arr2[i];

        for (int j = 0; j < n; j++)
        {
            if (tmp % 2 == 0)
            {
                str += ' ';
            }
            else
            {
                str += '#';
            }
            tmp = tmp >> 1;
        }

        reverse(str.begin(), str.end());
        answer.push_back(str);
    }
    return answer;
}