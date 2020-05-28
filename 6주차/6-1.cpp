#include <iostream>

using namespace std;

int getNum(int n){
	if(n == 1){
		return 1;
	}
	
	return n + getNum(n-1);
}

int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	cout << getNum(n);
	return 0;
}