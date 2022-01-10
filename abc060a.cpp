// https://atcoder.jp/contests/abc060/tasks/abc060_a

#include <iostream>
using namespace std;

int main(){
    string A,B,C;
    cin >> A >> B >> C;
    cout << ((A[A.length()-1] == B[0] && B[B.length()-1] == C[0]) ? "YES" : "NO") << endl;
    
    return 0;
}