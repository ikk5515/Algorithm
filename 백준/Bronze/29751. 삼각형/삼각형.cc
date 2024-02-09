// BOJ_29751_삼각형
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int W, H; cin >> W >> H;
    cout << fixed << setprecision(1);
    cout << (double)(W * H) / 2;
    return 0;
}