// BOJ_21920_서로소평균
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
    }

    int x; cin >> x;

    int cnt = 0; double total = 0.0;
    for (int i = 0; i < n; i++) {
        if (gcd(v[i], x) == 1) {
            cnt++;
            total += v[i];
        }
    }

    cout << fixed;
    cout.precision(7);
    cout <<  total / cnt;
    return 0;
}