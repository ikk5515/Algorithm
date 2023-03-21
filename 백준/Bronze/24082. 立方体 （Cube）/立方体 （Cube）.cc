// BOJ_24082_立方体 (Cube)
#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int ans = n * n * n;

    cout << ans;
    return 0;
}