#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if (a > b) { // 대소관계 구별
        int temp = a;
        a = b;
        b = temp;
    }
    long long len = b - a + 1; // 길이
    if (len % 2==0) answer += ((long long)a + (long long)b) * (len/2); // 길이가 짝수일 때
    else answer += (((long long)a + (long long)b) * ((len-1)/2)) + (((long long)a + (long long)b) / 2); // 길이가 홀수 일때
    return answer;
}
