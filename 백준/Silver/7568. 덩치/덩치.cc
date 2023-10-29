// BOJ_7568_덩치
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    } 
    for (int i = 0; i < N; i++) {
        int cnt = 1;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (v[i].first < v[j].first && v[i].second < v[j].second) cnt++;
        }
        cout << cnt << " ";
    }
    return 0;
}