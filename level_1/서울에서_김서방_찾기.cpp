#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    const string STR1 = "김서방은 ";
    const string STR2 = "에 있다";
    const string KIM = "Kim";
    
    string answer = "";
    
    for(int i = 0; i < seoul.size(); i++){
        if(seoul[i] == KIM){
            answer = STR1 + to_string(i) + STR2;
            break;
        }
    }
    return answer;
}
