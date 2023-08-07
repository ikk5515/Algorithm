// BOJ_19698_헛간 청약
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, w, h, l; cin >> n >> w >> h >> l;
    cout << min(n, (w / l) * (h / l));
    return 0;
}