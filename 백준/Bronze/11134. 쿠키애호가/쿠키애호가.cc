// BOJ_11134_쿠키애호가
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while(T--) {
        int N, C;
        cin >> N >> C;
        cout << (N + C - 1) / C << "\n";
    }
    return 0;
}