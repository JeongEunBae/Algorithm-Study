#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(char pre, char next) { // 사용자 정의함수
    return pre > next;
}

string solution(string s) {
    sort(s.begin(), s.end(), compare); // 내림차순으로 정렬
    return s;
}
