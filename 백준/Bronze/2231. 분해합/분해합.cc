// BOJ_2231_분해합
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, sum, tmp, ans = 0;
    cin >> N;
    
    for (int i = 1; i < N; i++) {
        sum = i;
        tmp = i;
        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == N) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}