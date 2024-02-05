#include <iostream>
#include <string>
#include <climits> // INT_MAX를 사용하기 위해 포함합니다.
using namespace std;

int main() {
    int n;
    cin >> n;
    string firstString = ""; // 가장 먼저 나오는 문자열을 저장할 변수
    int minAscii = INT_MAX; // 아스키 코드의 최대값으로 초기화

    for (int i = 0; i < n; i++) {
        string currentString;
        cin >> currentString;
        if (int(currentString[0]) < minAscii) {
            minAscii = int(currentString[0]);
            firstString = currentString;
        }
    }

    cout << firstString << endl;

    return 0;
}