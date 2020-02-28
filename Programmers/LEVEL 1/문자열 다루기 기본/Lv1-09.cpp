#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(string s) {
    if (s.length() == 4 || s.length() == 6) { // 문자열 길이가 4개, 6개일 경우
        for (int index = 0; index < s.length(); index++) {
            if (s[index] < '0' || s[index]>'9') return false; // 숫자가 아닌 경우
        }
        return true; // 문자열 전체가 숫자인 경우
    }
    else return false;
}
