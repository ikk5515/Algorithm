// BOJ_5648_역원소 정렬
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<long long> v;
    string str[n];
    for(int i = 0; i < n; i++){
        cin >> str[i];
        reverse(str[i].begin(), str[i].end());
        v.push_back(atoll(str[i].c_str()));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }
    return 0;
}