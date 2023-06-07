// BOJ_17219_비밀번호 찾기
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, k; cin >> n >> k;
    map<string, string> m;
    for (int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        m[a] = b;
    }
    for (int i =0; i < k; i++) {
        string str; cin >> str;
        cout << m[str] << "\n";
    }
    return 0;
}