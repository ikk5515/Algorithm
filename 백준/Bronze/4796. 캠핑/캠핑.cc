// BOJ_4796_캠핑
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int L, P, V, cnt = 1;
    while (1) {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)  {
            break;
        }
        int ans = 0;
        ans += (V / P) * L;
        if (V % P > L)  {
            ans += L;
        }
        else {
            ans += V % P;
        }
        cout << "Case " << cnt++ << ": " << ans << '\n';
    }
    return 0;
}