// BOJ_21964_선린인터넷고등학교 교가
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    cout << s.substr(n - 5, 5);
    return 0;
}