// BOJ_11024_더하기 4
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    cin.ignore();
    while (T--) {
        string str; getline(cin, str);
        istringstream ss(str);
        int sum = 0, num;
        while (ss >> num) sum += num;
        cout << sum << "\n";
    }
    return 0;
}