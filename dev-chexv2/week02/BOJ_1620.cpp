/* pseudo code
1. use map liblary
2. first line - int poketmon / problem amount
3. map / name-number
4. how to 구분 string , int?
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
    map<string, int> MP;
    
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


Bulbasaur
Ivysaur
Venusaur
Charmander
Charmeleon
Charizard
Squirtle
Wartortle
Blastoise
Caterpie
Metapod
Butterfree
Weedle
Kakuna
Beedrill
Pidgey
Pidgeotto
Pidgeot
Rattata
Raticate
Spearow
Fearow
Ekans
Arbok
Pikachu
Raichu

26 5

25
Raichu
3
Pidgey
Kakuna
