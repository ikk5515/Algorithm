// BOJ_6764_Sounds fishy!
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int arr[5] = { 0, };
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]) {
        cout << "Fish At Constant Depth";
        return 0;
    } 
    if (arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3]) {
        cout << "Fish Diving";
        return 0;
    }
    if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3]) {
        cout << "Fish Rising";
        return 0;   
    } else {
        cout << "No Fish";
    }
    return 0;
}