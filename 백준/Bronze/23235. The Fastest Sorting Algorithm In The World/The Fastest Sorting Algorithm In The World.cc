// BOJ_23235_The Fastest Sorting Algorithm In The World
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int num = 1;
    while (1)
    {
        int n; cin >> n;

        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
        }
        cout << "Case " << num << ": Sorting... done!" << "\n";
        num++;
    }
    return 0;
}