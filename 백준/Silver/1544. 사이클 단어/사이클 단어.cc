// BOJ_1544_사이클 단어
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    map<string, int> m;
    map<string, int>::iterator iter;

    int ans = 0;
    for (int i = 0; i < N; i++) {
        string str; cin >> str;

        iter = m.find(str);

        if (iter == m.end()) {
            ans++;
            
            for (int j = 0; j < str.size(); j++) {
                string tmp = "";
                for (int k = j; k < str.size(); k++) {
                    tmp += str[k];
                }

                for (int g = 0; g < j; g++) {
                    tmp += str[g];
                }

                m.insert({tmp,i});
            }
        } else {
            continue;
        }
    }
    cout << ans;
    return 0;
}