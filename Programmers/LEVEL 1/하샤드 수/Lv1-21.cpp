#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    int sum = 0, temp = x;
    while (x > 0) {
        sum += (x % 10); // 자릿수의 합
        x /= 10;
    }
    return (temp % sum == 0) ? true : false; // 나누어 떨어지면 True 반환
}
