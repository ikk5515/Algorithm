// BOJ_14912_숫자 빈도수
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m; cin >> n >> m;
    
    char ch = m + '0';
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        string tmp = to_string(i);
        for (int j = 0; j < tmp.length(); j++) {
            if (tmp[j] == ch) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}