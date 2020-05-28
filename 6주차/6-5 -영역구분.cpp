/*
1. 종이가 한가지 색으로 차 있는지 확인 
2. 그렇지 않다면 n/2으로 나눠서 탐색
3. 그렇다면 색 반환 
*/

#include <iostream>

using namespace std;

int map[8][8] = {
	{ 1, 1, 0, 0, 0, 0, 1, 1 },
	{ 1, 1, 0, 0, 0, 0, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 0, 0 },
	{ 0, 0, 0, 0, 1, 1, 0, 0 },
	{ 1, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 1, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 1, 1, 1, 1, 1, 1 },
	{ 0, 0, 1, 1, 1, 1, 1, 1 },
};

int answer[128][128];
int white, gray;

void div(int n, int a, int b){
	
	bool isOne = true;
	for(int i=a; i<a+n; i++){
		for(int j=b; j<b+n; j++){
			if(map[a][b] != map[i][j]){
				isOne = false;
			}
		}
	}
	
	if(isOne) {
		if(map[a][b] == 1){
			white++;
		}
		else {
			gray++;
		}
	}
	else {
		// 4등분
		div(n/2, a, b);
		div(n/2, a+n/2, b);
		div(n/2, a, b+n/2);
		div(n/2, a+n/2, b+n/2);	
	}	
}

int main(int argc, char** argv) {
	int n;
	cin >> n;
	div(n, 0, 0);
	
	cout << white << endl;
	cout << gray << endl;
	return 0;
}

