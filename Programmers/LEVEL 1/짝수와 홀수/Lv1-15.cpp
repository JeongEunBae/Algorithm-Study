#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    return (num % 2 == 0) ? "Even" : "Odd"; 
    // 조건이 TRUE 이면 "Even" 반환, FALSE이면 "Odd" 반환
}
