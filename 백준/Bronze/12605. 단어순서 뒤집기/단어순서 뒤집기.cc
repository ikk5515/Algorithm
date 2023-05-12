// BOJ_12605_단어순서 뒤집기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n; cin >> n;
    string str = ""; 
    string str2 = "";
    cin.ignore();
    for (int i = 0; i < n; i++) {        
        getline(cin, str);
        reverse(str.begin(), str.end());
        cout << "Case #" << i+1 << ": ";

        for (int j = 0; j < str.length(); j++) {
            if (str[j] != ' ') {
                str2 += str[j];
            } else {
                for (int k = str2.length()-1; k >= 0; k--) {
                    cout << str2[k];
                }
                cout << " ";
                str2.clear();
            }
        }
        if (str2.length() != 0) {
            reverse(str2.begin(), str2.end());
            cout << str2;
        }
        str2.clear();
        cout << "\n";
    }
    return 0;
}