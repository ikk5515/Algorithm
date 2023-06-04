// BOJ_2870_수학숙제
#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    if (a.size() < b.size()) {
        return true;
    } else if (a.size() == b.size()) {
        if(a < b) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<string> v;
    vector<string> v2;
    int n; cin >> n;

    string num;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        num.clear();
        bool flag = false;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] >= '0' && str[j] <= '9') {
                num += str[j];
                flag = true;
            } else if (flag) {
                v.push_back(num);
                num.clear();
                flag = false;
            } else {
                num.clear();
                flag = false;
                continue;
            }
        }
        if (flag) {
            v.push_back(num);
            flag = false;
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        string str = v[i];
        while (!str.empty()) {
            while(str.size() > 1 && str[0] == '0') {
                str.erase(0,1);
            }
            v2.push_back(str);
            str.clear();
        }

    }
    sort(v2.begin(), v2.end(), comp);

    for (auto a: v2) {
        cout << a << "\n";
    }
    return 0;
}