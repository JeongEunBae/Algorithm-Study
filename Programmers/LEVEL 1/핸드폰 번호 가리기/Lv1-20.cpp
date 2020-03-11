#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
	for (int index = 0; index < phone_number.size() - 4 ; index++) { // 길이 - 4 만큼 실행
		phone_number[index] = '*'; // 현재 문자열 위치에 '*' 대입
	}
	return phone_number;
}
