/*
1. (1,1)에 퀸 놓기
2. 다음 행에 가능한 가장 왼쪽에 퀸 놓기
3. n번째 열에 더 이상 퀸을 놓을 수 없으면 백 트래킹
4. 마지막 행에 놓으면 경우의 수 +1
5. 모든 경우의 수 조사
*/

#include <iostream>
#include <cmath>

using namespace std;

int col[15];
int n;
int answer = 0;

int check(int cur){	// 이 위치에 퀸을 놓을 수 있는지 검사 

	// 0~cur 행까지 검사 
	for(int i=0; i<cur; i++){
		
		// 열이 같거나, 대각선 범위내에 있으면 불가능 
		if(col[i] == col[cur] || abs(col[i] - col[cur]) == (cur-i)){
			return 0;
		}
	}	
	return 1;
}

void go(int i){
	
	// 종료 검사 
	if(i == n){
		answer += 1;
		return;
	}

	// 끝에 도달하지 않았으면 다음 위치 검사
	for(int j=0; j<n; j++){
		col[i] = j;
		if(check(i)){
			go(i+1);
		}
	}
	
	
}

int main() {
	cin >> n;
	go(0);
	cout << answer << endl;
	return 0;
}

