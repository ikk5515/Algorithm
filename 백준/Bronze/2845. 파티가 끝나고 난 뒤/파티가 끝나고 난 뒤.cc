// BOJ_2845_파티가 끝나고 난 뒤
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m; cin >> n >> m;

    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int num; cin >> num;
        v.push_back(num);
    }

    int tmp = n*m;
    for (int i = 0; i < 5; i++) {
        cout << v[i] - tmp << " ";
    }
    return 0;
}