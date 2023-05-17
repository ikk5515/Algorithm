// BOJ_2576_홀수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    int arr[8] = { 0, };
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    int res = 0;
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            continue;
        } else {
            res += arr[i];
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(), v.end());
    if (res == 0) { 
        cout << -1;
        return 0;
    } else {
        cout << res << "\n" << v[0];
    }
    return 0;
}