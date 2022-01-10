// https://atcoder.jp/contests/abc047/tasks/abc047_a

#include <iostream>
using namespace std;

int main(){
    int a,b,c,max,sum;
    cin >> a >> b >> c;
    if(a >= b && a >= c){max = a; sum = b+c;}
    else if(b >= a && b >= c){max = b; sum = a+c;}
    else{max = c; sum = a+b;}
    cout << ( (max==sum) ? "Yes" : "No" ) << endl;
    return 0;
}