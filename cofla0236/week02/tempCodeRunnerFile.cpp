#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    vector<char> result;

    int next = 1;

    for (int i = 0; i < n; i++) {
        int target = arr[i];

        // target까지 push
        while (next <= target) {
            s.push(next);
            result.push_back('+');
            next++;
        }

        // top 확인
        if (s.top() == target) {
            s.pop();
            result.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    // 결과 출력
    for (char c : result) {
        cout << c << '\n';
    }

    return 0;
}