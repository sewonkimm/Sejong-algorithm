#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getR1(vector<int> arr){
    int score = 0;
    for(int num : arr){
        score += abs(num);
    }
    return score;
}

int getR2(vector<int> arr){
    int score = 0;
    for(int num : arr){
        score -= abs(num);
    }
    return score;
}

int main(){
    int n;
    int r1=0;
    int r2=0;
    cin >> n;
    
    vector<int> arr1, arr2;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        arr1.push_back(tmp);
    }

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        arr2.push_back(tmp);
    }

    r1 = getR1(arr1);
    r2 = getR2(arr2);

    cout << r1 - r2;
    return 0;
}