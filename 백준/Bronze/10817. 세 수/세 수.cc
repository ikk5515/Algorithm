// BOJ_10817_세 수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v(3);

    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[1];
    return 0;
}