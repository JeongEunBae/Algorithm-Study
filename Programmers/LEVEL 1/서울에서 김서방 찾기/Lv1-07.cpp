#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int len = seoul.size();
    for (int i = 0; i < len; i++) {
        if (seoul.at(i) == "Kim") { // "Kim" 원소가 있는 인덱스 반환
            answer = "김서방은 " + to_string(i) + "에 있다";
            return answer;
        }
    }
}
