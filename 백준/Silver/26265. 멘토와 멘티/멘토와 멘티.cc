// BOJ_26265_멘토와 멘티
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, string> a, pair<string, string> b) {
    if (a.first == b.first) {
        return b.second < a.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<pair<string, string>> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s1, s2; cin >> s1 >> s2;
        v.push_back(make_pair(s1,s2));
    }

    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}