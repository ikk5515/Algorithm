// BOJ_16204_카드 뽑기
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m, k; cin >> n >> m >> k;

    cout << min(m, k) + min(n - m, n - k);
        
    return 0;
}