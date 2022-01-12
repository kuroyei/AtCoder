// https://atcoder.jp/contests/abc066/tasks/abc066_a

#include <iostream>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    int min = a+b;
    if(a+c<min) min = a+c;
    if(b+c<min) min = b+c;
    cout << min << endl;
    return 0;
}