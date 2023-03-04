// BOJ_ 6986_절사평균
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, k; cin >> n >> k;
    vector<double> v;

    for (int i = 0; i < n; i++) {
        double tmp = 0; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    double z = 0.0;
    for (int i = k; i < n-k; i++) {
        z += v[i];
    }
    z /= n - k*2;

    double b = 0.0;
    b += k*v[k];
    b += k*v[v.size()-k-1];
    for (int i = k; i < v.size()-k; i++) {
        b += v[i];
    }
    b /= n;
    
    cout << fixed;
    cout.precision(2);
    cout << z + 1e-9 << "\n" << b + 1e-9;
    return 0;
}