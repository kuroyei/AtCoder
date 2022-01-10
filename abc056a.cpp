// https://atcoder.jp/contests/abc056/tasks/abc056_a

#include <iostream>
using namespace std;

int main(){
    // aであるAtCoDeerは「TopCoDeerはb」と言っている．
    char a,b;
    cin >> a >> b;
    if(a=='H'){
        cout << b;
    } else {
        if(b=='H') cout << 'D';
        else cout << 'H';
    }
    cout << endl;
    return 0;
}