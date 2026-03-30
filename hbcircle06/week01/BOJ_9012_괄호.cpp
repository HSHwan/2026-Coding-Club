#include <stack>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    char arr[2] = {'(', ')'};
    string s[T];
    
    for (int i = 0; i < T; i++) {
        string str = {};
        int len = rand()%49+2;
        for (int j = 0; j < len; j++) {
            str += arr[rand()%2];
        }
        s[i] = str;
        cout << s[i] << endl;
    }
    
    for (int i=0; i<T; i++) {
        stack<char> st;
        for (int j=0; j<s[i].length(); j++) {
            if (s[i][j] == '(') {
                st.push(s[i][j]);
            }

            else if (s[i][j] == ')') {
                if (st.empty()) {
                    cout << "NO" <<endl;
                    break;
                }
                else st.pop();
            }

        }
        if (!st.empty()) {
            cout << "NO" << endl;
        }
        if (st.empty()) {
            cout << "YES" << endl;
        }   
    }
}
