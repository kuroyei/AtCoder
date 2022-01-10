// https://atcoder.jp/contests/abc046/tasks/abc046_a

#include <iostream>
using namespace std;

int main(){
    int a,b,c,cnt=0;
    cin >> a;
    cnt++;
    cin >> b;
    if(a!=b) cnt++;
    cin >> c;
    if(c!=a && c!=b) cnt++;
    cout << cnt << endl;
    return 0;
}