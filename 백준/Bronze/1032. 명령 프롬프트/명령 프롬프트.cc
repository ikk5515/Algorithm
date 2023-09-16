// BOJ_1032_명령 프롬프트
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    string str[50];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> str[i];
    }
    for(int i = 0; i < str[0].length(); i++) {
        bool flag = true;
        for(int j = 1; j < N; j++) {
            if(str[0][i] != str[j][i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << str[0][i];
        } 
        else {
            cout << '?';
        }
    }
    return 0;
}