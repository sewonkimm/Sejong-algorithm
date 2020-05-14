/*
DFS: 재귀
*/

#include <iostream>

using namespace std;

int n;
int count = 0;

void up(int sum){
	if(sum == n){
		count++;
		return;
	}
	else if(sum > n){
		return;
	}
	
	up(sum+1);
	up(sum+2);
}

int main()
{
	cin >> n;
	up(0);
	cout << count;
    return 0;
}

