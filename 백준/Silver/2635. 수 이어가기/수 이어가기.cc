// BOJ_2635_수 이어가기
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int max = 0;
    vector<int> v;
    vector<int> ans;
    for (int i = n; i >= n / 2; i--) {
        v.clear();
        v.push_back(n);
        v.push_back(i);
        int j = 0;
        while (1) {
            int temp = v[j] - v[j + 1];
            if (temp < 0)  {
                break;
            }
            v.push_back(temp);
            j++;
        }
        if (max < v.size()) {
            max = v.size();
            ans = v;
        }
    }
    cout << max << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}