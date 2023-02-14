// BOJ_6754_Bridge transport
#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    queue<int> q;
    queue<int> q2;
    int w; cin >> w;
    int n; cin >> n;

    long long sum = 0;
    int cnt = 0;
    int cur = 0;
    int now = 0;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        q.push(k);
        q2.push(k);

    }
    while(true) {
        if (cnt >= n || q.empty()) {
            break;
        }
        int num = q.front();
        
        if (cnt == 0 & sum + num <= w) {
            sum += num;
            cnt++;
            cur++;            
            now++;
            q.pop();
        } else if (now < 4 && sum + num <= w) {
                sum += num;
                cnt++;
                cur++;
                now++;
                q.pop();
        } else if (now >= 4 && sum + num - q2.front() <= w) {
                sum = sum + num - q2.front();
                cnt++;
                cur++;
                q.pop();
                q2.pop();
        } else {
            break;
        }
    }
    cout << cur;
    return 0;
}
