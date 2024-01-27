// BOJ_2935_소음
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string A, B, op;
    cin >> A >> op >> B;
    if (op == "*") {
        cout << "1";
        for (int i = 0; i < A.length() + B.length() - 2; i++) {
            cout << "0";
        }
    }
    else {
        if (A.length() == B.length()) {
            cout << "2";
            for (int i = 0; i < A.length() - 1; i++) {
                cout << "0";
            }
        }
        else {
            if (A.length() > B.length()) {
                cout << "1";
                for (int i = 0; i < A.length() - B.length() - 1; i++) {
                    cout << "0";
                }
                cout << "1";
                for (int i = 0; i < B.length() - 1; i++) {
                    cout << "0";
                }
            }
            else {
                cout << "1";
                for (int i = 0; i < B.length() - A.length() - 1; i++) {
                    cout << "0";
                }
                cout << "1";
                for (int i = 0; i < A.length() - 1; i++) {
                    cout << "0";
                }
            }
        }
    }
    return 0;
}