// BOJ_1205_등수 구하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, score, P;
    cin >> N >> score >> P;
    vector<int> v(N);
    
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    if (N == P && v[N - 1] >= score) {
        cout << -1;
        return 0;
    }

    v.push_back(score);
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < N + 1; i++) {
        if (v[i] == score) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}