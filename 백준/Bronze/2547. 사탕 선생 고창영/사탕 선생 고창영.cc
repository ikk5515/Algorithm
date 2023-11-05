// BOJ_2547_사탕 선생 고창영
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long T, N, C, sum;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        sum = 0;
        for (int j = 0; j < N; j++) {
            cin >> C;
            sum += C;
            sum %= N;
        }
        if (sum == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}