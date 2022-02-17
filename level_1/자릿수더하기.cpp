#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    int tmp = n;
    while(tmp > 0){
        answer += (tmp%(10));
        tmp = tmp/(10);
    }

    return answer;
}
