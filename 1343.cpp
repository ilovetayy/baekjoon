//greedy #1
#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    string res = "";
    int i;
    int cnt = 0;

    cin >> input;

    for(i=0; i<input.size(); i++){
        if(input[i] == 'X'){
            cnt++;
        }
        else if(input[i] == '.'){
            if(cnt % 2 == 1){
                cout << "-1" << endl;
                return 0;  
            }
            if(cnt == 2){
                res += "BB";
                cnt = 0;
            }
            res += ".";
        }

        if(cnt == 4){
            res += "AAAA";
            cnt = 0;
        }
    }

    if(cnt == 2) res += "BB";
    if(cnt % 2 == 1){
        cout << "-1" << endl;
        return 0;
    }
    cout << res << endl;
    return 0;
}