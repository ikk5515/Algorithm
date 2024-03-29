// BOJ_6321_IBM 빼기 1
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for(int i=1; i<=n; i++) {
        string s; cin >> s;
        cout << "String #" << i << '\n';

        for(int j = 0; j < s.length(); j++) {
            if(s[j] == 'Z') cout << 'A';
            else cout << (char)(s[j] + 1);
        }
        cout << "\n\n";
    }
    return 0;
}
