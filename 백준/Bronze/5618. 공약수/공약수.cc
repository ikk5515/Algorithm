// BOJ_5618_공약수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int gcd = v[0];
    for(int i = 1; i < n; i++) {
        int a = gcd;
        int b = v[i];
        while(b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        gcd = a;
    }
    for(int i = 1; i <= gcd; i++) {
        if(gcd % i == 0) {
            cout << i << "\n";
        }
    }
    return 0;
}