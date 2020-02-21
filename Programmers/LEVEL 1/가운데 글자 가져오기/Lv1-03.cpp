#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    if (len % 2 == 1) answer = s.at(len / 2); // 문자열 길이가 홀수일때
    else { // 문자열 길이가 짝수일때 
        answer = s.at((len / 2) - 1);
        answer.push_back(s.at(len / 2)); // * substr 함수 공부 필요 *
    }
    return answer;
}
