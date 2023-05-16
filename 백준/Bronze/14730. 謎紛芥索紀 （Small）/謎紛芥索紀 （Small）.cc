// BOJ_14730_謎紛芥索紀 (Small)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<pair<int, int>> v;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        int c, k; cin >> c >> k;
        v.push_back(make_pair(c, k));
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += v[i].first * v[i].second;
    }
    cout << res;
    return 0;
}