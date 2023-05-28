// BOJ_26082_WARBOY
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    cout << ((b*c)/a)*3;
    return 0;
}