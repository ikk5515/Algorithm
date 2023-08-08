// BOJ_13985_Equality
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a, b, c; char ch1, ch2;
    cin >> a >> ch1 >> b >> ch2 >> c;
    if (a + b == c) {
        cout << "YES";  
    } 
    else {
        cout << "NO";
    }
    return 0;
}