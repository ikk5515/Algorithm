// BOJ_4447_좋은놈 나쁜놈
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, g, b;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        g = 0, b = 0;
        string s = "";
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'g' || s[j] == 'G') g++;
            else if (s[j] == 'b' || s[j] == 'B') b++;
        }
        cout << s << " is ";
        if (g > b) cout << "GOOD\n";
        else if (g < b) cout << "A BADDY\n";
        else cout << "NEUTRAL\n";
    }
    return 0;
}