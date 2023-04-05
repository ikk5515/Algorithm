// BOJ_14518_팬들에게 둘러싸인 홍준
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    cout << ":fan::fan::fan:\n";
    cout << ":fan::";
    cout << str;
    cout << "::fan:\n";
    cout << ":fan::fan::fan:\n";
}