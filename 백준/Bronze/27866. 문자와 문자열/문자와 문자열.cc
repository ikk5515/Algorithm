// BOJ_27866_문자와 문자열
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    int n; cin >> n;
    cout << str[n-1];

    return 0;
}