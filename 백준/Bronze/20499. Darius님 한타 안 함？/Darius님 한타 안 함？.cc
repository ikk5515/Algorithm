// BOJ_20499_Darius님 한타 안 함?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int k,d,a;
    scanf("%d/%d/%d", &k, &d, &a);

    if (k + a < d || d == 0) {
        cout << "hasu";
    } else {
        cout << "gosu";
    }
    return 0;
}