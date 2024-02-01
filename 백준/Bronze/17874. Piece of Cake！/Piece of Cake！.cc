// BOJ_17874_Piece of Cake!
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, h, v; cin >> n >> h >> v;
    cout << max(h, n-h) * max(v, n-v) * 4;
    return 0;
}