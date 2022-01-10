// https://atcoder.jp/contests/abc063/tasks/abc063_a

#include <iostream>
using namespace std;

int main(){
    int A,B; cin >> A >> B;
    if(A+B<10) cout << A+B;
    else cout << "error";
    cout << endl;
    return 0;
}