// BOJ_11931_수 정렬하기 4
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }
    return 0;
}