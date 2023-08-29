// BOJ_20291_파일 정리
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    map<string, int> m;
    vector<string> str;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string fileName; cin >> fileName;
        size_t extension = 0;
        extension = fileName.find('.');
        string s = fileName.substr(extension + 1, fileName.length() - 1);

        if (m.find(s) == m.end()) {
            m.insert({ s, 1 });
            str.push_back(s);
        }
        else {
            m[s]++;
        }
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " " << m[str[i]] << "\n";
    }
    return 0;
}