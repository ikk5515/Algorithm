// BOJ_17609_회문
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin >> t;

    for (int p = 0; p < t; p++) {
        string str; cin >> str;
        int count = 0;
        int l = 0, r = str.length()-1;
        int n_l = 0, n_r = 0;
        while (l < r) {
            if (str[l] == str[r]) {
                l++; r--;
                continue;
            }

            if (count == 0 && str[l+1] == str[r]) {
                n_l = l;
                n_r = r;
                l++;
                count = 3;
                continue;
            } else if (count == 0 && str[l] == str[r-1]) {
                r--;
                count = 1;
                continue;
            } else {
                if (count == 3) {
                    l = n_l;
                    r = n_r-1;
                    count = 1;
                } else {
                    count = 2;
                    break;
                }
            }
        }
        if (count == 1 || count == 3) {
            cout << 1 << "\n";
        } else if (count == 2) {
            cout << 2 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}