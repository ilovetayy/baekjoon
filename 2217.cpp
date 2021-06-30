//greedy #2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, i, input;
    vector<int> rope, res;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> input;
        rope.push_back(input);
    }

    sort(rope.begin(), rope.end());

    for(i=1; i<=n; i++){
        res.push_back(rope[i-1] * (n-i+1));
    }

    cout << *max_element(res.begin(), res.end()) << endl;

    return 0;
}