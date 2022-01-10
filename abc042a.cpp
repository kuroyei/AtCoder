// https://atcoder.jp/contests/abc042/tasks/abc042_a

#include <iostream>
using namespace std;

int main(){
    int five_cnt = 0;
    int seven_cnt = 0;
    int inp;
    for(int i=0;i<3;i++){
        cin >> inp;
        if(inp == 5){ five_cnt++; }
        else if(inp == 7){ seven_cnt++; }
    }
    cout << ((five_cnt == 2 || seven_cnt == 1)? "YES" : "NO") << endl;
    return 0;
}