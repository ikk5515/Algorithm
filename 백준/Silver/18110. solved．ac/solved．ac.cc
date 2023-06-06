// BOJ_18110_solved.ac
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    
    int n; cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    double d = 0.0;

    d = (n * 0.3) * 0.5;
    d = round(d);
    
    double res = 0.0;
    for (int i = d; i < n-d; i++) {
        res += v[i];
    }
    cout << round(res / (n-d*2))<< "\n";
    
    return 0;
}