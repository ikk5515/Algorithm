// BOJ_27294_몇개고?
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T, S; cin >> T >> S;
    if (S == 0 && (12 <= T && T <= 16)) {
        cout << "320";
    } else {
        cout << "280";
    }
    return 0;
}