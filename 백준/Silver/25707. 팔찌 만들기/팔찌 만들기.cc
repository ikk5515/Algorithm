// BOJ_25707_팔찌 만들기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    int min_n = v[0];
    int max_n = v[v.size() - 1];

    cout << 2 * (max_n - min_n);
    return 0;
}