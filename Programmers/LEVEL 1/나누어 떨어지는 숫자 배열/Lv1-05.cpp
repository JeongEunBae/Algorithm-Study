#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int len = arr.size();
    for (int i = 0; i < len; i++) {
        if (arr[i] % divisor == 0) answer.push_back(arr[i]); // 나누어 떨어진 수 벡터에 저장
    }
    if (answer.empty()) answer.push_back(-1); // 벡터가 비어있을 경우
    else sort(answer.begin(), answer.end()); // 오름차순으로 sort
    return answer;
}
