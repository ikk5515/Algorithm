// BOJ_10101_삼각형 외우기
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int A,B,C; cin >> A >> B >> C;
    
    if ((A+B+C)!=180) {
        cout <<"Error";
    }
    else if (A==B && B==C) {
        cout <<"Equilateral";
    }
    else if (A==B || A==C || B==C) {
        cout  <<"Isosceles";
    }
    else {
        cout <<"Scalene";
    }
    return 0;
}