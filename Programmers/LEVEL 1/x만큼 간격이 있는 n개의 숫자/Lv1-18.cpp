#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.push_back(x); // 첫번째 원소 값 추가
    for (int index = 1; index < n; index++) {
        answer.push_back(x + (x * index)); // 두번째 원소부터 값 추가
    }
    return answer;
}
