#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for (int index = 0; index < s.size(); index++) {
        if (s.substr(index, 1).compare(" ") == 0) { // 공백일 경우
            count = 0; // count 변수값 0으로 초기화
            answer.push_back(s[index]);
            continue;
        }
        else if (count % 2 == 0)
        {
            if (s[index] >= 'a' && s[index] <= 'z') answer.push_back(s[index] - 32); // 소문자 일 경우 대문자로 변환
            else answer.push_back(s[index]);
        }
        else if (count %2 != 0) {
            if (s[index] >= 'A' && s[index] <= 'Z') answer.push_back(s[index] + 32); // 대문자 일 경우 소문자로 변환
            else answer.push_back(s[index]);
        }
        count++;
    }
    return answer;
}
