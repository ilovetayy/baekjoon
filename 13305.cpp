//greedy #3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, i, input, minIndex, minCost;
    long res = 0;
    int need = 0;
    long min = 1000000001;
    vector<long> length, price;

    cin >> n;
    for(i=0; i<n-1; i++){
        cin >> input;
        length.push_back(input);
    }
    for(i=0; i<n-1; i++){
        cin >> input;
        price.push_back(input);
    }
    cin >> input;
    /*
    for(i=0; i<n-1; i++) need += length[i];

    minIndex = min_element(price.begin(), price.end()) - price.begin();

    for(i=0; i<n-1; i++){
        if(need != 0){
            if(minIndex == i){
            res += price[i] * need;
            need = 0;
            break;
            }
            res += price[i] * length[i];
            need -= length[i];
        }
    }
    */
    for(i=0; i<n-1; i++){
        if(price[i] < min) min = price[i];
        res += min * length[i];
    }

    cout << res << endl;
    return 0;
}