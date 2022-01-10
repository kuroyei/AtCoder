// https://atcoder.jp/contests/abc054/tasks/abc054_a

#include <iostream>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if(A==1) A = 14;
    if(B==1) B = 14;
    if(A==B) cout << "Draw";
    else if(A>B) cout << "Alice";
    else cout << "Bob";
    cout << endl;
    return 0;
}