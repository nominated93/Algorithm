#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int chkNum = -1;
    for(int i = 0; i < arr.size(); i++){
        // 이전 숫자(chkNum)와 비교해서 다르면 pushback
        if(chkNum != arr[i]){ 
            answer.push_back(arr[i]);
            chkNum = arr[i];
        }
    }

    return answer;
}
