// https://atcoder.jp/contests/abc059/tasks/abc059_a

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s1,s2,s3;
    char out[4];
    cin >> s1 >> s2 >> s3;
    out[0] = s1[0]; out[1] = s2[0]; out[2] = s3[0]; out[3] = '\0';
    for(int i=0;i<3;i++){
        printf("%c", toupper(out[i]));
    }
    return 0;
}