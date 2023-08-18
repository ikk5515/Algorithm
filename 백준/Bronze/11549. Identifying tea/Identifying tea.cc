// BOJ_11549_Identifying tea
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int ans = 0;
    int t; cin >> t;
    for (int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == t) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}