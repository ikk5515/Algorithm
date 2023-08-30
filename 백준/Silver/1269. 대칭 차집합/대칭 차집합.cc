// BOJ_1269_대칭 차집합
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int A, B; cin >> A >> B;
    map<int, bool> ans;

    for (int i = 0; i < A + B; i++) {
        int num; cin >> num;
        if (ans[num] == true) {
            ans.erase(num);
        } else {
            ans[num] = true;
        }
    }
    cout << ans.size();
    return 0;
}