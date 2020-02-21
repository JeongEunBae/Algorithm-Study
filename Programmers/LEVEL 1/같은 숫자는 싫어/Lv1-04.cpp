#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int len = arr.size();
    answer.push_back(arr[0]); // 첫번째 원소 추가
    for (int i = 1; i < len; i++) {
        if (arr.at(i) != arr.at(i - 1)) answer.push_back(arr.at(i)); // 같지 않을 경우 원소 추가
    }
    return answer;
}
