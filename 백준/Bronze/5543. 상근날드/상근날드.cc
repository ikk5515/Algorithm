// BOJ_5543_상근날드
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int ham1, ham2, ham3; cin >> ham1 >> ham2 >> ham3;
    int drink1, drink2; cin >> drink1 >> drink2;

    int minHam = min({ham1, ham2, ham3});
    int minDrink = min({drink1, drink2});

    cout << minHam + minDrink - 50;
    return 0;
}