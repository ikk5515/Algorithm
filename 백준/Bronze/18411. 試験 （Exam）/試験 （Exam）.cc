// BOJ_18411_試験 (Exam) 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[3] = { 0, };
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3, greater<int>());
    cout << arr[0] + arr[1];
    return 0;
}