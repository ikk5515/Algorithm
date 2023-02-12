// BOJ_1676_팩토리얼 0의 개수
#include <iostream>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    
    int ans = 0;
    while(true) {
        if(n < 5) {
            break;
        } else {
            ans += n / 5;
            n /= 5;
        }
    }
    cout << ans;
    return 0;
}
