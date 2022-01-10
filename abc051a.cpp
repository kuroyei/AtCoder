// https://atcoder.jp/contests/abc051/tasks/abc051_a

#include <iostream>
using namespace std;

int main(){
    char s[19];
    cin >> s;
    for(int i=0;i<19;i++){
        cout << ((s[i]==',') ? ' ' : s[i]);
    }
    cout << endl;
    return 0;
}