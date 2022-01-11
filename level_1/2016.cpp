#include <string>
#include <vector>

using namespace std;

string daysArr[] = {
    "SUN"
    , "MON"
    , "TUE"
    , "WED"
    , "THU"
    , "FRI"
    , "SAT"
};

int monthsArr[] = {
    31
    , 28
    , 31
    , 30
    , 31
    , 30
    , 31
    , 31
    , 30
    , 31
    , 30
    , 31
};

bool IsLeafYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }
    
    return false;
}

string solution(int a, int b) {
    const int CUR_YEAR = 2016;
    const int YEAR_DAY = 365;
    const int WEEK_DAY = 7;
    
    string answer = "";
    int yearDay = 0;
    if(IsLeafYear(CUR_YEAR)){
        monthsArr[1] = 29;
        if(a >= 3) { // 해당년도 윤년일 경우 1일 추가 보정
            yearDay++;
        };
    };
    
    int month_day = 0;
    for(int i = 0; i < a - 1; i++){
        month_day += monthsArr[i];
    }
    
    int preYear = CUR_YEAR-1;
    yearDay = preYear * YEAR_DAY + (preYear/4 - preYear/100 + preYear/400); // 윤년 일수 보정
    
    answer = daysArr[(yearDay + month_day + b) % WEEK_DAY];
    
    return answer;
}
