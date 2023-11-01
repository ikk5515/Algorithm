// BOJ_5357_Dedupe
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str = "";
    string answer;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        answer = str[0];
        for (int j = 1; j < str.size(); j++) {
            if (str[j] == str[j - 1]) {
                continue;
            }
            else {
                answer += str[j];
            }
        }
        cout << answer << "\n";
    }
    return 0;
}