// BOJ_12788_제 2회 IUPC는 잘 개최될 수 있을까?
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    int n; cin >> n;

    int m, k; cin >> m >> k;
    int allP = m * k;

    for (int i = 0; i < n; i++) {
        int pen; cin >> pen;
        v.push_back(pen);
    }

    sort(v.begin(), v.end(), greater<int>());
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (sum < allP) {
            sum += v[i];   
            cnt++;
        } else {
            break;
        }
    }
    if (sum >= allP) {
        cout << cnt;
    } else {
        cout << "STRESS";
    }
    return 0;
}