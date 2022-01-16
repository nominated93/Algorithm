#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    int p_cnt = 0;
    int y_cnt = 0;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'p'){
            p_cnt++;
        } else if(s[i] == 'y'){
            y_cnt++;
        }
    }

    return (p_cnt == y_cnt);
}
