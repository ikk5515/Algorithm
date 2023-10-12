// BOJ_5073_삼각형과 세 변
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while(1){
        int a, b, c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        
        sort(arr, arr+3);
        if (arr[0] + arr[1] <= arr[2]) {
            cout << "Invalid\n";
        } else if (arr[0] == arr[1] && arr[1] == arr[2]) {
            cout << "Equilateral\n";
        } else if(arr[0] == arr[1] || arr[1] == arr[2]) {
            cout << "Isosceles\n";
        } else {
            cout << "Scalene\n";
        }
    }
    return 0;
}