/*

1. 대소문자 차이를 무시하므로 전부 대문자로 통일
2. 입력을 두글자씩 끊어서 map에 넣는다. (key-value)
    - 특수문자, 숫자가 있으면 map에 넣지 않는다.
3. 2개의 문자 조합마다 합집합++
4. 두번째 문자열을 비교할 때, 이미 map에 존재하면 교집합++ 존재하지 않으면 합집합++
5. 자카드 유사도 계산

*/

#include <map>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    
    map<string, int> dict;
    double all = 0;
    double dup = 0;
    int answer = 65536;
    
    // 1. 대소문자 차이를 무시하므로 전부 대문자로 통일
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // 2. 입력을 두글자씩 끊어서 map에 넣는다. (key-value)
    for(int i=0; i<str1.size()-1; i++){
        // 특수문자, 숫자가 있으면 map에 넣지 않는다.
        if(str1[i] < 'a' || str1[i] > 'z')  continue;
        if(str1[i+1] < 'a' || str1[i+1] > 'z')  continue;
        
        string tmp = "";
        tmp = str1[i];
        tmp += str1[i+1];
        all ++;
        
        if(dict.count(tmp)){
            dict[tmp]++;
        }
        else {
            dict[tmp] = 1;
        }
    }
    
    for(int i=0; i<str2.size()-1; i++){
        if(str2[i] < 'a' || str2[i] > 'z')  continue;
        if(str2[i+1] < 'a' || str2[i+1] > 'z')  continue;
        
        string tmp = "";
        tmp = str2[i];
        tmp += str2[i+1];
        
        if(dict.count(tmp)){
            if(dict[tmp] > 0){
                dup++;
                dict[tmp]--;
            }
            else {
                all++;
            }
        }  
        else {
            all ++;
        }
    }
    
    // 5. 자카드 유사도 구하기
    if (all != 0){
        answer = (int)((double)answer * (dup / all));
    }
    return answer;
}