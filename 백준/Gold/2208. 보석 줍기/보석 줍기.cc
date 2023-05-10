// BOJ_2208_보석 줍기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int arr[100001] = { 0, };
    
    int result = 0;
    int cnt = 0;
    int last = 0;
    int n, m;
    cin >> n >> m;
    
    for (int j = 0; j < n; j++) {
        int num = 0;
        cin >> num;
        v.push_back(num);
        if (j == 0 ) {
            arr[0] = num;
        } else {
            arr[j] = arr[j-1] + v[j];
        }
    }
    for (int j = m; j < n; j++) {
        result = max(result, arr[j] - (cnt = (min(arr[j - m], cnt))));
    }
    if (result < 0) {
        result = 0;
    }
    cout << result << "\n";
    return 0;
}