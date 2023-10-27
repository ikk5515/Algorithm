// BOJ_2003_수들의 합 2
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M, num, cnt = 0;
    cin >> N >> M;
    vector<int> v;
    
    for(int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }
    for(int i = 0; i < N; i++) {
        int sum = 0;
        for(int j = i; j < N; j++) {
            sum += v[j];
            if(sum == M) {
                cnt++;
                break;
            }
            if(sum > M) {
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}