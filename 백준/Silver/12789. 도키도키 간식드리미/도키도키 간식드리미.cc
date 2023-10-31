// BOJ_12789_도키도키 간식드리미
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, num, cnt = 1;
    cin >> N;
    stack<int> s;

    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num == cnt) {
            cnt++;
        }
        else {
            while (!s.empty() && s.top() == cnt) {
                s.pop();
                cnt++;
            }
            s.push(num);
        }
    }

    while (!s.empty() && s.top() == cnt) {
        s.pop();
        cnt++;
    }
    
    if (s.empty()) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }
    return 0;
}