// BOJ_11536_줄 세우기
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
char ch[21][21];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    cin >> ch[0];

    bool flag = true, chk= true;
    for (int i = 1; i < n; i++) {
        cin >> ch[i];
        int comp = strcmp(ch[i], ch[i - 1]);
        if (comp > 0) {        // 오름차순
            chk = false;
        } else if (comp < 0) {  // 내림차순
            flag = false;
        }
    }

    if (flag) {
        cout << "INCREASING";
    } else if(chk) {
        cout << "DECREASING";
    } else {
        cout << "NEITHER";
    }
    return 0;   
}