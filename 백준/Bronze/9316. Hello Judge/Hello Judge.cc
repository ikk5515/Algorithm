// BOJ_9316_Hello Judge
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Hello World, Judge " << i+1 << "!" << "\n";
    }
    return 0;
}