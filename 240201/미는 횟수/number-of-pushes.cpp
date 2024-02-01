#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // A의 길이가 B의 길이보다 짧으면 B를 만들 수 없음
    if (A.length() < B.length()) {
        cout << -1 << endl;
        return 0;
    }

    int min_shift = -1; // 가능한 최솟값을 저장할 변수, 초기값은 -1로 설정

    // 문자열 A를 우측으로 회전시키면서 B와 비교
    for (int i = 0; i < A.length(); ++i) {
        string rotated_A = A.substr(A.length() - i) + A.substr(0, A.length() - i);
        if (rotated_A == B) {
            min_shift = i; // 회전한 횟수를 최솟값으로 저장
            break;
        }
    }

    cout << min_shift << endl;

    return 0;
}