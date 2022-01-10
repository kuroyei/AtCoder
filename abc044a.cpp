// https://atcoder.jp/contests/abc044/tasks/abc044_a

#include <iostream>
using namespace std;

int main(){
    int N,K,X,Y;
    // N times stay; until K or K, X yen; after K, Y yen
    cin >> N >> K >> X >> Y;
    cout << ((N-K>0)?(X*K+Y*(N-K)):(X*N)) << endl;
    return 0;
}