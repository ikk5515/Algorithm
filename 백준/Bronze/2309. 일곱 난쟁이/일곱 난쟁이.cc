// BOJ_2309_일곱 난쟁이
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int sum = 0;
    vector<int> v;

    for (int i = 0; i < 9; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
        sum += v[i];
    }
    sort(v.begin(), v.end());
    cout << "\n\n";
    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 9; j++) {
            if ((sum - (v[i] + v[j])) == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) {
                        continue;
                    } else {
                        cout << v[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }
}