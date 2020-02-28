#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p_count = 0, y_count = 0;
    for (int index = 0; index < s.length(); index++) {
        if (s[index] == 'p' || s[index] == 'P') p_count++; // 문자가 'p'이거나 'P'일 때
        if (s[index] == 'y' || s[index] == 'Y') y_count++; // 문자가 'y'이거나 'Y'일 때
    }
    if (p_count == y_count) return true; // 개수가 같을 경우
    else  return false; // 다를 경우 
}
