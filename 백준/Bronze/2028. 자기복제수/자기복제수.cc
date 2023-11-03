// BOJ_2028_자기복제문자열
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        string str = to_string(N * N);
        if (str.substr(str.length() - to_string(N).length()) == to_string(N)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}