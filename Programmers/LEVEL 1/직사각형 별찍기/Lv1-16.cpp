#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) { // 세로 길이 만큼
        for (int j = 0; j < a; j++) { // 가로 길이 만큼
            cout << "*"; // 별 출력
        }
        cout << endl;
    }
    return 0;
}
