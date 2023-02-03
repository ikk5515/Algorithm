// BOJ_25192_인사성 밝은 곰곰이
#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    set<string> s;
    int n; cin >> n;
    
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        if (str == "ENTER") {
            cnt += s.size();
            s.clear();
            flag = false;
        } else {
            s.insert(str);
            flag = true;
        }
    }
    if (flag) {
        cnt += s.size();
    }
    cout << cnt;
    return 0;
}