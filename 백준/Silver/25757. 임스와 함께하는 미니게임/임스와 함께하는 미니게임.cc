// BOJ_25757_임스와 함께하는 미니게임
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    set<string> st;
    char ch;
    int n; cin >> n >> ch;

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        st.insert(str);
    }
    if (ch == 'Y') {
        cout << st.size();
        return 0;
    } else if (ch == 'F') {
        cout << st.size()/2;
        return 0;
    } else {
        cout << st.size()/3;
        return 0;
    }

    return 0;
}