// BOJ_13458_시험 감독
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, B, C;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> B >> C;

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        A[i] -= B;
        ans++;
        if (A[i] > 0) {
            ans += A[i] / C;
            if (A[i] % C > 0) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}