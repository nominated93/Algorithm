#include <algorithm>

int solution(int N) {
    string binaryN = "";

    while(N != 0)
    {
        binaryN += to_string(N % 2);
        N = N/2;
    }
    reverse(binaryN.begin(), binaryN.end());

    bool isZero = false;
    int zeroCnt = 0;
    int maxCnt = 0;
    for(int i = 0; i < binaryN.size(); i++)
    {
        if(binaryN[i] == '0')
        {
            isZero = true;
            zeroCnt++;
        } 
        else if(binaryN[i] == '1')
        {
            isZero = false;
            if(zeroCnt > maxCnt)
            {
                maxCnt = zeroCnt;
            }
            zeroCnt = 0;
        }
    }

    return maxCnt;
}
