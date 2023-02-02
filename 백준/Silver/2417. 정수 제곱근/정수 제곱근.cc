// BOJ_2417_정수 제곱근
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    long long n; cin >> n;
    long long ans = sqrt(n);
    if ((ans * ans) < n) {
        ans++;
        cout << ans;
    } else {
        cout << ans;
    }
    return 0;
}