//greedy 0¹ø
#include <iostream>
using namespace std;

int countFive(int* change, int* cnt){
    int q = *change / 5;
    if(q == 0){
        return 0;
    }
    *cnt += q;
    *change -= q * 5;
    return 1;
}

int countTwo(int* change, int* cnt){
    int r = *change / 2;
    if(r == 0){
        return 0;
    }
    *cnt += r;
    *change -= r * 2;
    return 1;
}

int main(){
    int change, tmp;
    int cnt = 0;
    cin >> change;

    tmp = countFive(&change, &cnt);

    // 6: 0 2 2 2
    //26: 5 5 5 5 2 2 2 
    //21: 5 5 5 2 2 2
    if(change % 2 == 0){
        countTwo(&change, &cnt);
    }
    else{
        if(tmp == 0){
            cout << "-1" << endl;
            return 0;
        }
        cnt--;
        change += 5;
        countTwo(&change, &cnt);
    }

    cout << cnt << endl;
    return 0;
}