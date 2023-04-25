// BOJ_14652_나는 행복합니다~
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n, m, num; cin >> n >> m >> num;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (cnt == num) {
                cout << i << " " << j;
                return 0;
            }
            cnt += 1;
        }
    }
    return 0;
}