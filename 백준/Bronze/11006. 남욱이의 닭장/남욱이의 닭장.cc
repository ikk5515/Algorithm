// BOJ_11006_남욱이의 닭장
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << M * 2 - N << " " << M - (M * 2 - N) << "\n";
    }
    return 0;
}