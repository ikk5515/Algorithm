// BOJ_1264_모음의 개수
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    while (true) {
        int cnt = 0;
        string str;
        getline(cin, str);
        if (str == "#") {
            break;
        }
        else {
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}