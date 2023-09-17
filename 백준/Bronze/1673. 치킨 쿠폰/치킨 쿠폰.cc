// BOJ_1673_치킨 쿠폰
#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,k;
    while(cin >> n >> k){
        int ans = 0;
        while(n >= k){
            int c = n / k;
            ans += c * k;
            n %= k;
            n += c;
        }
        cout << ans + n << "\n";
    }
    return 0;
}