// BOJ_2721_삼각수의 합
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, N; cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int sum = 0;
        for (int j = 1; j <= N; j++) {
            sum += j * (j + 1) * (j + 2) / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}