#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, double> a, pair<int, double> b) {
    if (a.second > b.second) {
        return a.first > b.first;
    }
    if (a.second == b.second) {
        return a.first < b.first;
    }
}


vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> fails;
    

    for (int i = 1; i <= N; i++) {
        double count = 0.0;
        double success = 0.0;
        double fail = 0.0;
        double prob = 0.0;
        for (int j = 0; j < stages.size(); j++) {
            if (stages[j] > i) {
                success++;
            }
            if (stages[j] == i) {
                count++;
                success++;
            }
        }
        if (count == 0 || success == 0) {
            prob = 0.0;
        } else {
            prob = count / success;
        }
        fails.push_back(make_pair(i, prob));
    }
    
    stable_sort(fails.begin(), fails.end(), comp);
    
    for (int i = 0; i < fails.size(); i++) {
        answer.push_back(fails[i].first);
    }
    
    return answer;
}