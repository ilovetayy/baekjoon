#include <iostream>
#include <string>
using namespace std;

int main(){
    int T, R, i, j, k;
    string S;

    cin >> T;
    for(i=0; i< T; i++){
        cin >> R;
        cin >> S;
        for(j=0; j<S.size(); j++){
            for(k=0; k<R; k++)
                cout << S[j];
        }
        cout << endl;
    }
    return 0;
}