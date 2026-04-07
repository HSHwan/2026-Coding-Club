/* pseudo code
1. use map liblary
2. first line - int testcase T
3. up,low / under 5 / not same
4. reverse
5. enter, leave
*/

#include <iostream>
#include <map>
#include <string>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
    FAST_IO
    string IO="";
    string name="";
    int T=0;
    map<string, int, greater<string>> MP;
    
    cin >> T;

    while(T--){
        cin >> name >> IO; // getline
        if (IO == "enter") MP[name] = 1;
        else MP.erase(name);
    }
    for (auto person : MP)
        cout << person.first << "\n";

    return 0;
}
