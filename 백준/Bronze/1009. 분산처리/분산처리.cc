// BOJ_1009_분산처리
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T, a, b;
    cin >> T;
    while(T--) {
        cin >> a >> b;
        int ans = 1;
        for(int i = 0; i < b; i++) {
            ans = (ans * a) % 10;
        }
        if(ans == 0) ans = 10;
        cout << ans << '\n';
    }
    return 0;
}