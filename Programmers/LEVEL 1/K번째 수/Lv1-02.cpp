#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> n_array(vector<int>array, int i, int j) {
    vector <int> new_array;
    for (int len = i-1; len <= j-1; len++) { // 원하는 벡터 크기만큼 저장 
        new_array.push_back(array[len]);
    }
    return new_array;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, new_array;
    for (int len = 0; len < commands.size(); len++) {
        int i = commands[len][0];
        int j = commands[len][1];
        int k = commands[len][2];
        new_array = n_array(array, i, j); // 원하는 크기만큼 자른 새로운 벡터
        sort(new_array.begin(), new_array.end()); // 오름차순으로 정렬
        answer.push_back(new_array[k-1]); // K번째 위치 벡터에 저장 
    }
    return answer;
}
