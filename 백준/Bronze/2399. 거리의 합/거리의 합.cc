// BOJ_2399_거리의 합
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    long long sum = 0;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    } 
    sort(v.begin(), v.end());
    
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            sum += (v[j] - v[i]) * 2;
        }
    }
    cout << sum;
    return 0;
}