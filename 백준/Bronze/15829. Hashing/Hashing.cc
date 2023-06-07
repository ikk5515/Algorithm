// BOJ_15820_Hashing
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int M = 1234567891;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    long long hash = 0;

    string str = "";
    cin >> str;
    char c;
    long long a = 1;
    for (int i = 0; i < n; i++) {
        c = str[i];
        hash += ((c - 96) * a) % M;
        a = (a * 31) % M;
    }
    cout << hash;
}