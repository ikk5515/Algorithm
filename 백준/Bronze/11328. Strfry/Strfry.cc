// BOJ_11328_Strfry
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        bool flag = true;
        string str1, str2; cin >> str1 >> str2;
        int arr[26] = { 0, };
        for (int i = 0; i < str1.length(); i++) arr[str1[i] - 'a']++;
        for (int i = 0; i < str2.length(); i++) arr[str2[i] - 'a']--;
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }
    return 0;
}