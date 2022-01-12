// https://atcoder.jp/contests/abc067/tasks/abc067_a

#include <iostream>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    if(a%3==0||b%3==0||(a+b)%3==0) cout << "Possible";
    else cout << "Impossible";
    cout << endl;
    return 0;
}