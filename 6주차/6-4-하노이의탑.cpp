#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int> > ans;

void move(int n, int s, int e){
	if(n == 1){
		ans.push_back(make_pair(s, e));
		return;
	}
	
	int next = 6-s-e;
	move(n-1, s, next);
	ans.push_back(make_pair(s, e));
	move(n-1, next, e);
}

int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	
	move(n, 1, 3);
	
	cout << ans.size() << endl;
	for(int i=0; i<ans.size(); i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	return 0;
}