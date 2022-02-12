#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int next_truck = 0;     // 대기 트럭 중 맨 앞의 트럭의 인덱스
    int weight_sum = 0;     // 다리 위에 있는 트럭의 무게 합
    queue<int> on_bridge;   // 다리 위에 있는 트럭
 
    // bridge_length 크기에 따라 on_bridge 초기화 작업
    for (int i = 0; i < bridge_length; i++) {
        on_bridge.push(0);
    }
 
    while (!on_bridge.empty()) {
        answer++;
        weight_sum -= on_bridge.front();
        on_bridge.pop();
        
        if(next_truck < truck_weights.size()){
            if(weight >= truck_weights[next_truck]+weight_sum){
                weight_sum += truck_weights[next_truck];
                on_bridge.push(truck_weights[next_truck]);
                next_truck++;
            }else{
                on_bridge.push(0);
            }
        }
        
    }
 
    return answer;
}
