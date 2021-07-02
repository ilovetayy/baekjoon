//greedy 4¹ø
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, i, input;
    long long res = 0;
    vector<long long> tips;

    cin >> n;
    for(i=0; i<n; i++){
        cin >> input;
        tips.push_back(input);
    }

    sort(tips.begin(), tips.end());
    reverse(tips.begin(), tips.end());

    for(i=0; i<tips.size(); i++){
        long long cal = tips[i] - i;
        if(cal < 0) 
            tips[i] = 0;
        else
            tips[i] = cal;
    }

    for(i=0; i<tips.size(); i++){
        res += tips[i];
    }

    cout << res << endl;

    return 0;
}