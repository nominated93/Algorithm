#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    const int ALPHA_CNT = 26;
    vector<char> v_alpha_up;
    vector<char> v_alpha_low;
    for(int i = 0; i < ALPHA_CNT; i++){
        v_alpha_up.push_back(65 + i);
        v_alpha_low.push_back(97 + i);
    }
    
    
    for(int i = 0; i < s.size(); i++){        
        if(s[i] == ' '){
            answer += " ";
        }else{
            int shift_cnt = 0;
            vector<char> v;
            if(s[i] >= 65 && s[i] <= 90){ // 대문자
                v = v_alpha_up;
            } else{
                v = v_alpha_low;
            }
            shift_cnt = (find(v.begin(), v.end(), s[i]) - v.begin()) + n;
            // while(shift_cnt >= ALPHA_CNT){
            //     shift_cnt -= ALPHA_CNT;
            // };
            if(shift_cnt >= ALPHA_CNT) shift_cnt %= ALPHA_CNT;

            answer += v[shift_cnt];
        }
    }
    
    return answer;
}
