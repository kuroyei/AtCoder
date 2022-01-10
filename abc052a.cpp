// https://atcoder.jp/contests/abc052/tasks/abc052_a

#include <iostream>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << ((A*B >= C*D)?A*B:C*D) << endl;
    return 0;
}