#include <iostream>

using namespace std;

int f(int n){
	if(n == 1){
		return 1;
	}
	
	if(n == 2){
		return 3;
	}
	
	return f(n-1) + 2*f(n-2);
}

int main(int argc, char** argv) {
	
	int n, m;
	cin >> n >> m;
	
	cout << f(n)%m;
	
	return 0;
}