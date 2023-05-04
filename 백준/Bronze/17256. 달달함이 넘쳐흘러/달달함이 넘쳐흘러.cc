// BOJ_17256_달달함이 넘쳐흘러
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int ax, ay, az;
    int cx, cy, cz;
    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;
    cout << cx-az << " " << cy/ay << " "  << cz-ax;
    return 0;
}