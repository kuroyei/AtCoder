// https://atcoder.jp/contests/abc062/tasks/abc062_a

#include <iostream>
using namespace std;

int main(){
    int x,y,wX,wY;
    cin >> x >> y;
    int g1[] = {1,3,5,7,8,10,12};
    // int g2[] = {2};
    int g3[] = {4,6,9,11};
    for(int i=0;i<7;i++){
        if(x==g1[i]) wX = 1;
        if(y==g1[i]) wY = 1;
    }
    if(x==2) wX = 2;
    if(y==2) wY = 2;
    for(int i=0;i<4;i++){
        if(x==g3[i]) wX = 3;
        if(y==g3[i]) wY = 3;
    }
    if(wX==wY) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}