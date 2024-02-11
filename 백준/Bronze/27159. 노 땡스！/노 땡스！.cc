// BOJ_27159_노 땡스!
#include <iostream>
using namespace std;

int main() {
    int arr[35] = { 0 };
    int N, sum = 0; cin >> N;
    
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    sum += arr[0]; 
    
    for (int i = 1; i < N; i++) {
        if (arr[i-1] != arr[i] - 1)
            sum += arr[i];
    }
    cout << sum;
    return 0;
}