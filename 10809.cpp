#include <iostream>
#include <string>
using namespace std;

int main(){
    int pos[26];
    int i;
    string input;

    for(i=0; i<26; i++) pos[i] = -1;

    cin >> input;

    for(i=0; i<input.size(); i++){
        if(pos[input.at(i)-97] != -1) continue;
        pos[input.at(i)-97] = i;
    }
    
    for(i=0; i<26; i++){
        cout << pos[i] << " ";
    }
    cout << endl;
    return 0;
}