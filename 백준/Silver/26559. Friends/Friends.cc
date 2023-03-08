// BOJ_26559_Friends
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b) {
    if (a.second > b.second) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<pair<string, int>> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        for (int j = 0; j < m; j++) {
            int num;
            string s; cin >> s >> num;
            v.push_back(make_pair(s, num));
        }
        sort(v.begin(), v.end(), comp);

        for (int j = 0; j < m; j++) {
            if (j != m-1) {
            cout << v[j].first << ", ";
            } else {
                cout << v[j].first;
            }
        }
        cout << "\n";
        v.clear();
    }
    return 0;
}