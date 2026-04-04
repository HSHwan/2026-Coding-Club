/* pseudo code
first line = case amount
int = 4byte = 32bit / total 0~31
2~ = add 1
{add, / or |=
remove, / Not AND ^ &=
check, / AND &=
toggle, / use check algo
all, / transition
empty} / init
*/
#include <iostream>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
    FAST_IO
    string str="";
    int S = 0;
    int T, x;

    cin >> T;
    while (T--){
        cin >> str;
        if(str=="add"){
            cin >> x;
            S |= (1<<x);
        }
        else if(str=="remove"){
            cin >> x;
            S &= ~(1<<x);
        }
        else if(str=="check"){
            cin >> x;
            if (S & (1<<x)) cout << "1\n";
            else cout << "0\n";
        }
        else if(str=="toggle"){
            cin >> x;
            S ^= (1<<x);
        }
        else if(str=="all"){
            S = (1 << 21) - 1;
        }
        else if(str=="empty"){S=0;}
    }
}