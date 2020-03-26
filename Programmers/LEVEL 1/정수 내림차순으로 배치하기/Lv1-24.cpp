#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;

long long solution(long long n) {
    vector<int> answer_vec;
    while (n > 0) {
        answer_vec.push_back(n % 10); // 각 자릿수를 벡터에 추가
        n /= 10;
    }
    sort(answer_vec.begin(), answer_vec.end()); // 오름차순으로 정렬
    long long answer = 0;
    for (int i = 0; i < answer_vec.size(); i++) {
        if(i==0) answer+=answer_vec[i];
        else answer += answer_vec[i] * pow(10,i) ; // 내림차순으로 int값 만들기
    }
    return answer;
}
