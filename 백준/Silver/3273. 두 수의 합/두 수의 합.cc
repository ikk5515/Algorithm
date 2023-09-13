// BOJ_3273_두 수의 합
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, x; cin >> n;
    vector<long long> v(n);

    for (int i = 0 ; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;

    sort(v.begin(), v.end());

    int cnt = 0, first = 0, second = v.size()-1;
    while(first != second) {
        
        if (v[first] + v[second] == x) {
            cnt++;
            second--;
        } else {
            if (v[first] + v[second] > x) {
                second--;
            } else if (v[first] + v[second] < x) {
                first++;
            }
        }
    }
    cout << cnt;
    

    return 0;
}