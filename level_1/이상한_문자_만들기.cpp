#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int chkNum = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            chkNum = -1;
        }
        if(chkNum % 2 == 0){
            s[i] = toupper(s[i]);
        } else{
            s[i] = tolower(s[i]);
        }
        
        chkNum++;
    }
    
    return s;
}
