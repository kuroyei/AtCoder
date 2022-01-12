// https://atcoder.jp/contests/abc065/tasks/abc065_a

#include <iostream>
using namespace std;

int main(){
    int x,a,b;
    cin >> x >> a >> b;
    /*
        買ったのは x-a 日
        食ったのは (x-a) + b 日 <- これがxを超えるか？

    */
    int eatDate = (x-a)+b;
    if(eatDate <= x) cout << "delicious";
    else if(eatDate == x+1) cout << "safe";
    else cout << "dangerous";
    cout << endl;
    return 0;
}