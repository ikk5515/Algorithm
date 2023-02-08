// BOJ_3059_등장하지 않는 문자의 합
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        int arr[26] = { 0, };
        string str; cin >> str;
        int cnt = 0;
        for (int j = 0; j < str.size(); j++) {
            cnt = str[j] - 65;
            arr[cnt]++;
        }
        
        int ans = 0;
        for (int j = 0; j < 26; j++) {
            if (arr[j] == 0) {
                ans += j+65;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}