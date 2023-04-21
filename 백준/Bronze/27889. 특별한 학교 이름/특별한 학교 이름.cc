// BOJ_27889_특별한 학교 이름
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    if (str == "NLCS") {
        cout << "North London Collegiate School";
    } else if (str == "BHA"){
        cout << "Branksome Hall Asia";
    } else if (str == "KIS"){
        cout << "Korea International School";
    } else {
        cout << "St. Johnsbury Academy";
    }
    return 0;
}