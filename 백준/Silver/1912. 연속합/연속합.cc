// BOJ_1912_연속합
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
    int n;
    cin >> n;
    
    for (int j = 0; j < n; j++) {
        int num = 0;
        cin >> num;
        v.push_back(num);
    }
    result = v[0];
    arr[0] = v[0];
    for (int j = 1; j < n; j++) {
        result = max(result, arr[j] = max(arr[j - 1] + v[j], v[j]));
    }
    cout << result << "\n";
    return 0;
}