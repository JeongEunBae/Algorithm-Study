#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end()); // 오름차순으로 정렬
    sort(completion.begin(), completion.end()); // 오름차순으로 정렬

    for (int i = 0; i < participant.size()-1; i++) {
        if (participant[i] != completion[i]) { // 현재 원소가 다르다면 저장
            answer = participant[i]; 
            break;
        }
    }
    if (answer == "") answer = participant[participant.size() - 1]; // answer이 비어있다면 마지막 원소가 정답
    return answer;
}
