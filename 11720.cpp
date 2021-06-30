#include <iostream>
using namespace std;

int main(){
    int n, i;
    char num;
    int res = 0;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> num;
        res += num -48;
    }

    cout << res <<endl;
    return 0;
}