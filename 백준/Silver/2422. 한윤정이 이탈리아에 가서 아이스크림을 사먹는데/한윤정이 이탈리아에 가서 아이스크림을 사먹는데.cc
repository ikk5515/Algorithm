// BOJ_2422_한윤정이이탈리아에가서아이스크림을사먹는데
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int cnt = 0;
    int N, M; cin >> N >> M;
    vector<vector<bool>> v(N+1, vector<bool>(N+1, false));
    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        v[a][b] = true;
        v[b][a] = true;
    }

    for (int i = 1; i <= N-2; i++) {
        for (int j = i+1; j <= N-1; j++) {
            if (v[i][j]) {
                continue;
            }
            for (int k = j+1; k <= N; k++) {
                if (v[i][k] || v[j][k]) {
                    continue;
                }
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}