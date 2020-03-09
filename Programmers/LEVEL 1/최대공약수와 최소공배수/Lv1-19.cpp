#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int temp_n = n, temp_m = m;
    while (n % m) { // 유클리드 알고리즘
        int temp = n % m;
        n = m;
        m = temp;
    }
    answer.push_back(m); // 최대공약수
    answer.push_back(temp_n / m * temp_m); // 최소공배수
    return answer;
}
