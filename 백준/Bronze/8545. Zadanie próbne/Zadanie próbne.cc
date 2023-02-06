// BOJ_8545_Zadanie próbne
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    for (int i = str.size()-1; i >= 0; i--) {
        cout << str[i];
    }
    return 0;
}