/*
key의 중복을 허용되지 않는 map 사용

1. key - value를 학번 - 입력순서로 하는 map으로 입력
2. vector를 map의 (value, key) pair로 입력
3. value 기준으로 정렬
4. 수강 가능 인원만큼 출력

*/

#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <utility>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
    int K, L;
    map<string, int> student; // (key - value) = (학번 - 입력순서)
    map<string, int>::iterator iter;
    vector<pair<int, string>> answer;

    scanf("%d %d", &K, &L);
    for (int i = 0; i < L; i++)
    {
        string num;
        cin >> num;
        student[num] = i;
    }

    for (iter = student.begin(); iter != student.end(); iter++)
    {
        answer.push_back(make_pair(iter->second, iter->first));
    }

    // 입력순서 기준으로 정렬
    sort(answer.begin(), answer.end());

    //수강 가능 인원만큼 출력
    K = min(K, (int)answer.size());
    for (int i = 0; i < K; i++)
    {
        printf("%s\n", answer[i].second.c_str());
    }

    return 0;
}