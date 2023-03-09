// BOJ_5426_비밀 편지
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    string st = "";
    for (int i = 0; i < n; i++) {
        st = "";
        cin >> st;
        int leng = st.length();
        leng = round(sqrt(leng));

        for (int j = leng-1; j >= 0; j--) {
            for (int k = j; k < st.length(); k += leng) {
                cout << st[k];
            }
        }
        cout << "\n";
    }
    return 0;
}