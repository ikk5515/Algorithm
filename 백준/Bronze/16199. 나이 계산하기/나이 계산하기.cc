// BOJ_16199_나이 계산하기
#include <iostream>
using namespace std;

int main() {
    int ay, am, ad, by, bm, bd;
    cin >> ay >> am >> ad >> by >> bm >> bd;

    int age = by - ay;
    if (bm < am) {
        age--;
    } 
    else if (am == bm) {
        if (bd < ad) {
            age--;
        }
    }

    cout << age << '\n';
    cout << by - ay + 1 << '\n';
    cout << by - ay << '\n';
    return 0;
}