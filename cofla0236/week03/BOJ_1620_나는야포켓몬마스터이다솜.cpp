#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<string> pokemon(N + 1);
    map<string, int> num;

    for (int i = 1; i <= N; i++) {
        cin >> pokemon[i];
        num[pokemon[i]] = i;
    }

    for (int i = 0; i < M; i++) {
        string quiz;
        cin >> quiz;

        if (isdigit(quiz[0])) {
            int index = stoi(quiz);
            cout << pokemon[index] << '\n';
        } else {
            cout << num[quiz] << '\n';
        }
    }

    return 0;
}