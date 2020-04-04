#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> stack;
    for (int size = 0; size < moves.size(); size++) { // moves 벡터 크기만큼 반복문 실행
        for (int board_size = 0; board_size < board.size(); board_size++) { // board의 해당위치 원소 값 확인
            if (board[board_size][moves[size] - 1] != 0) { // 인형이 존재할 경우
                stack.push_back(board[board_size][moves[size] - 1]); // 스택에 값 추가 
                if (stack.size() > 1) { // 스택에 원소가 2개 이상 일 경우
                    if (stack[stack.size() - 1] == stack[stack.size() - 2]) { // 같은 인형이 스택에 쌓였을 경우
                        stack.pop_back();
                        stack.pop_back();
                        answer += 2; // 사라진 인형 개수
                    }
                }
                board[board_size][moves[size] - 1] = 0;
                break;
            }
        }
    }
    return answer;
}
