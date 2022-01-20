#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> v(n, true);
    
    for(int i = 2; i <= n; i++){
        if(v[i]){
            for(int j = 2; i*j <= n; j++){
                v[i*j] = false;
            }
            answer++;
        }
    }
   
    return answer;
}
