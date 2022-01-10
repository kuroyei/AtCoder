// https://atcoder.jp/contests/abc058/tasks/abc058_a

#include <iostream>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    cout << ((a-b==b-c) ? "YES" : "NO") << endl;
    return 0;
}