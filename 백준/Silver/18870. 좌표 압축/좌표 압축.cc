// BOJ_18870_좌표 압축
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<long long> v1, v2;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        long long tmp; cin >> tmp;
        v1.push_back(tmp);
        v2.push_back(tmp);
    }
    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    for (int i = 0; i < n; i++) {
        cout << lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin() << " ";
    }

    return 0;
}