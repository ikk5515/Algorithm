// BOJ_11943_파일 옮기기
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = (b + c) < (a + d) ? (b + c) : (a + d);
    cout << ans;

    return 0;
}