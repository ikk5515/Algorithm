// BOJ_10825_국영수
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct person {
    string name;
    int kor, eng, math;
};

bool comp(person a, person b) {
    if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) {
        return a.name < b.name;
    } else if (a.kor == b.kor && a.eng == b.eng) {
        return a.math > b.math;
    } else if (a.kor == b.kor) {
        return a.eng < b.eng;
    } else {
        return a.kor > b.kor;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    vector<person> v(n+1);

    for (int i = 0; i < n; i++) {
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].name << "\n";
    }
    return 0;
}