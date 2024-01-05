// BOJ_4562_No Brainer
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, X, Y;
    cin >> T;
    while(T--) {
        cin >> X >> Y;
        if(X >= Y) cout << "MMM BRAINS\n";
        else cout << "NO BRAINS\n";
    }
    return 0;
}