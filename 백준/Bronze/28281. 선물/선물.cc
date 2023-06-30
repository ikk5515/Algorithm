// BOJ_28281_선물
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, x; cin >> n >> x;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int min_num = 2100000000;
    for (int i = 0; i < n-1; i++) {
        min_num = min(min_num, (v[i] * x + v[i+1] * x));
    }
    cout << min_num;

    return 0;
}