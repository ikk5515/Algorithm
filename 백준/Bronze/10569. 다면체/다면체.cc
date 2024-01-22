// BOJ_10569_다면체
#include <iostream>
using namespace std;

int main() {
    int T, V, E;
    cin >> T;
    while(T--) {
        cin >> V >> E;
        cout << 2 - V + E << "\n";
    }
    return 0;
}