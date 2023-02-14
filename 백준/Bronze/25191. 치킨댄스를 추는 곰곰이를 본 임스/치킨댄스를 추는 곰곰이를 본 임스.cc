// BOJ_25191_치킨댄스를 추는 곰곰이를 본 임스
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int a, b; cin >> a; cin >> b;
    
    int cnt = 0;
    int tmp = n;
    for (int i = 0; i < n; i++) {
        if (tmp == 0) {
            break;
        }
        if (a >= 2) {
            a -= 2;
            cnt++;
            tmp--;
        } else if (b >= 1) {
            b -= 1;
            cnt++;
            tmp--;
        }
    }
    cout << cnt;
    return 0;
}