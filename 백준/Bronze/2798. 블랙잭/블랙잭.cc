// BOJ_2798_블랙잭
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    vector<int> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];
    int sum = 0;
    int max = 0;
    for (int i = 0; i < N - 2; i++) {
        sum += v[i];
        for (int j = i + 1; j < N - 1; j++) {
            sum += v[j];
            for (int k = j + 1; k < N; k++) {
                sum += v[k];
                if (sum <= M && sum > max) {
                    max = sum;
                }
                sum -= v[k];
            }
            sum -= v[j];
        }
        sum -= v[i];
    }
    cout << max;
    return 0;
}