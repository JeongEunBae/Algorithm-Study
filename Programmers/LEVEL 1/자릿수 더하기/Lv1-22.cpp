#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    while (n > 0) {
        answer += (n % 10); // 자릿수의 합
        n /= 10;
    }
    return answer;
}
