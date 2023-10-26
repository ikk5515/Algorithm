//BOJ_2864_5와 6의 차이
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string A, B;
    cin >> A >> B;
    for(int i = 0; i < A.length(); i++) {
        if(A[i] == '5') {
            A[i] = '6';
        } 
    }
    for(int i = 0; i < B.length(); i++) {
        if(B[i] == '5') {
            B[i] = '6';
        }
    }
    int min_n = stoi(A) + stoi(B);
    for(int i = 0; i < A.length(); i++) {
        if(A[i] == '6') {
            A[i] = '5';
        }
    }
    for(int i = 0; i < B.length(); i++) {
        if(B[i] == '6') {
            B[i] = '5';
        }
    }
    int max_n = stoi(A) + stoi(B);
    cout << max_n << " " << min_n;
    return 0;
}