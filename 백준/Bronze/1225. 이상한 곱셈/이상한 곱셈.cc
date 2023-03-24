// BOJ_1225_이상한 곱셈
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string a, b; cin >> a >> b;
    
    long long ans = 0;
    for (int i = 0; i < a.length(); i++) {
        for (int j = 0; j < b.length(); j++) {
            ans += (int(a[i])-'0') * (int(b[j])-'0');
        }
    }
    cout << ans;
    return 0;
}