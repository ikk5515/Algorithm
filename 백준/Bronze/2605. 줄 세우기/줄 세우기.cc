// BOJ_2605_줄 세우기
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, num;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        v.insert(v.end()-num, i+1);
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}