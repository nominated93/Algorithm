#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int front_result = -1;
    int count = 0;
    
    queue<int> result;
    
    for(int i = 0; i < progresses.size(); i++){
        result.push(ceil((float)(100-progresses[i]) / (float)speeds[i])); // 진행률 소수점 올림 처리
    }
    
    while(!result.empty()){
        front_result = result.front();
        count = 1;
        result.pop();

        while(!result.empty() && front_result >= result.front()){ // 진행률이 큰 값이 나올 때 까지 pop 해줌
            count++; // 한 번에 몇개나 할 수 있는지 저장
            result.pop();
        }
        answer.emplace_back(count);
    }
    
    return answer;
}
