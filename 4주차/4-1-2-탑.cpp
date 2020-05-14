/*
1. 입력받을 때 stack에 저장, pair 사용 (위치, 높이)
2. 입력받는 높이가 stack.top 보다 크다 => 해당 위치를 저장 (이때 중간의 height보다 작은 값은 사용되지 않으므로 pop으로 제거)
3. 작다 => 해당 위치를 바로 저장(바로 왼쪽의 수신탑)
*/

#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    stack< pair<int, int> > st;
    vector<int> answer;
    
    scanf("%d", &n);
	
    for (int i = 1; i <= n; i++)
    {
        int h;
        scanf("%d", &h);
        
        // 맨 첫번째 
		if(st.empty()){
        	answer.push_back(0);
		}
		else {
			if(h > st.top().first){		// 입력받는 높이가 stack.top 보다 크다 
				while(!st.empty() && h>st.top().first){
	        		st.pop();
				}
				
				if(!st.empty()){
					answer.push_back(st.top().second);
				}
				else {
					answer.push_back(0);
				}
			}
			else {						// 입력받는 높이가 stack.top 보다 작다 
				answer.push_back(st.top().second);
			}
		} 
		st.push(make_pair(h, i));
    }
    
    for(int ans: answer){
    	printf("%d ", ans);
	}
    return 0;
}