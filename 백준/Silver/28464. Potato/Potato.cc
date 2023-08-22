// BOJ_28464_Potato
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    long long su = 0, ba = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    if (n == 1) {
        cout << 0 << " " << v[0];
        return 0;
    }
    if (n % 2 == 0) {
        for (int i = 0; i < n/2; i++) {
            ba += v[n-i-1];
            su += v[i];
        }
    } else {
        for (int i = 0; i < n/2; i++) {
            ba += v[n-1-i];
            su += v[i];
        }
        ba += v[(v.size()-1)/2];
    }
    cout << su << " " << ba;
    return 0;
}