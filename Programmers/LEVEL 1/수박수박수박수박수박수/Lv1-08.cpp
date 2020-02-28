#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
        string answer = "";
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) answer.append("수"); // 홀수 일 경우
            else answer.append("박"); // 짝수 일 경우
        }
        return answer;
}
