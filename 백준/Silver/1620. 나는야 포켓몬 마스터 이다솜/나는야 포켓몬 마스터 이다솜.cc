// BOJ_1620_나는야 포켓몬 마스터 이다솜
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N, M; cin >> N >> M;
    map<int, string> m;
    map<string, int> m2;

    for (int i = 1; i <= N; i++) {
        string pokemon; cin >> pokemon;
        m.insert({i, pokemon});
        m2.insert({pokemon, i});
    }

    for (int i = 0; i < M; i++) {
        string poke_num; cin >> poke_num;
        if (atoi(poke_num.c_str())) {
            auto item = m.find(stoi(poke_num));
            cout << item->second << "\n";
        } else {
            auto item = m2.find(poke_num);
            cout << item->second << "\n";
        }
    }

    return 0;
}