#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 1;
    queue<int> list;
    queue<pair<int, int>> pair_list;
    
    // 초기화
    for(int i = 0; i < priorities.size(); i++){
        pair_list.push(make_pair(i, priorities[i]));
    }
    
    // 정렬 후 최댓값 - priorities.back()
    sort(priorities.begin(), priorities.end());
    
    while(!pair_list.empty()){
        // 중요도가 낮으면 맨 뒤로 배치
        while(!pair_list.empty()){
            if(pair_list.front().second < priorities.back()){
                pair_list.push(pair_list.front());
                pair_list.pop();
            } else{
                if(pair_list.front().first == location){
                    return answer;
                }
                pair_list.pop();
                answer++;
                break;
            }
        }
        priorities.pop_back();
   }

    
    return answer;
}
