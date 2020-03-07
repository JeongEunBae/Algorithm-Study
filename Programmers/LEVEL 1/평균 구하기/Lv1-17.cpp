#include <string>
#include <vector>
#include <iostream>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (int index = 0; index < arr.size(); index++) {
        answer += arr.at(index); // 모든 원소 더하기
    }
    answer /= arr.size(); // 평균 구하기
    return answer;
}
