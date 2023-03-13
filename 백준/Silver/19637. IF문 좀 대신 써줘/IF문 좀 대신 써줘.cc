// BOJ_19637_IF문 좀 대신 써줘
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    map<int, string> mp;
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        int num;        
        cin >> s >> num;
        mp.insert({num, s});
    }

    for (int i = 0; i < m; i++) {
        int num; cin >> num;

        cout << (mp.lower_bound(num))->second << "\n";
    }
    return 0;
}