// BOJ_26575_Pups
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while(T--) {
        double d, f, p; cin >> d >> f >> p;
        cout << fixed << setprecision(2) << "$" << d * f * p << "\n";
    }
    return 0;
}