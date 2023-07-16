// BOJ_28135_Since 1973
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int cnt = 0;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        cnt++;
        if( flag ) {
            cnt++;
            flag = false;
        }
        if (str.find("50") != string::npos) {
            flag = true;
        }
    }
    cout << cnt;
    return 0;
}