//greedy 5번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long input;
    int i, n;
    vector<long long> t, res;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> input; //근손실 정도는 모두 다름
        t.push_back(input);
    }

    //오름차순으로 정렬
    sort(t.begin(), t.end());

    if(n % 2 == 1){ //n : odd
        res.push_back(t[n-1]);
        int cnt = n / 2;
        for(i=0; i<cnt; i++){
            res.push_back(t[i] + t[n-2-i]);
        }
    }
    else{ // n: even
        int cnt = n / 2;
        for(i=0; i<cnt; i++){
            res.push_back(t[i] + t[n-1-i]);
        }
    }

    cout << *max_element(res.begin(), res.end()) << endl;

    return 0;
}