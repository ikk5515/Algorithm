// BOJ_5988_홀수일까 짝수일까
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s[s.length() - 1] % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
    return 0;
}