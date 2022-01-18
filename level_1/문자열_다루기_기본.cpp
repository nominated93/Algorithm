#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    if(s.size() != 4 && s.size() != 6) return false;
    
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i]) == 0) return false;
    }
    
    return true;
}
