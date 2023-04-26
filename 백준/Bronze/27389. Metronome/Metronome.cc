// BOJ_27389_Metronome
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double n; cin >> n;
    double d;

    d = n/4;

    cout << fixed;
    cout.precision(2);
    cout << d;
    return 0;    
}