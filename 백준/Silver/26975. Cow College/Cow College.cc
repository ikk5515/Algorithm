// BOJ_26975_Cow College
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<long long> v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    long long ans = 0, num = 0;
    for (int i = n-1; i >= 0; i--) {
        long long tmp = v[i] * (n-i);
        if (tmp >= ans) {
            ans = tmp;
            num = v[i];
        }
    }
    cout << ans << " " << num;
    return 0;
}