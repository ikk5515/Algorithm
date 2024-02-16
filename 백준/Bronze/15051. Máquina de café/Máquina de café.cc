// BOJ_15051_Máquina de café
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A1, A2, A3; cin >> A1 >> A2 >> A3;          
    int ans = min(A2 * 2 + A3 * 4, min(A1 * 2 + A3 * 2, A1 * 4 + A2 * 2));
    cout << ans;
    return 0;
}