#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int readarray(int arraysize, int array[]) {
    for (int i=0; i<arraysize; i++) {
        cin >> array[i];
    }
}

int main() {
    int N;
    int lights[N] = {};
    int days = 1;

    cin >> N;
    readarray(N, lights);
    sort(lights, lights+N);

    if (lights[N]-lights[0] =< N) {
        cout << days;
    } 
    else if(lights[N]-ligths[0] > N){
        while (true) {
            for (int i=0; i<N; i++) {
                if (lights[N]-ligths[i] =< N) {
                    cout << days + i;

                }

            }
        }

    }
}
