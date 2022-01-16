#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<int, string>> stringVec;
    
    for(int i = 0; i < strings.size(); i++){
        stringVec.push_back(make_pair(strings[i][n], strings[i]));
    }
    
    sort(stringVec.begin(), stringVec.end());
    
    for(int i = 0; i < stringVec.size(); i++){
        answer.push_back(stringVec[i].second);
    }
    
    return answer;
}
