// BOJ_2783_삼각 김밥
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int X, Y, N; cin >> X >> Y >> N;
    double price, min_price;
    min_price = (double)X / Y;
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        price = (double)X / Y;
        min_price = min(min_price, price);
    }
    cout << fixed << setprecision(2) << min_price * 1000;
}