// BOJ_2903_중앙 이동 알고리즘
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n; cin >> n;

    long long ans = 2;
    while (n--) {
        ans += (ans-1);
    }
    cout << ans * ans;

    return 0;
}