#include <string>
#include <vector>
#include <iostream> // 결과를 화면에 출력하기 위해 추가

using namespace std;

// 회원님이 작성하신 완벽한 solution 함수
string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int current = stoi(pos.substr(0,2))*60+stoi(pos.substr(3,2));
    int videolen = stoi(video_len.substr(0,2))*60+stoi(video_len.substr(3,2));
    int opstart = stoi(op_start.substr(0,2))*60+stoi(op_start.substr(3,2));
    int opend = stoi(op_end.substr(0,2))*60+stoi(op_end.substr(3,2));
    
    for ( string com : commands ){ 
        if (current<=opend && current >= opstart){
            current = opend; 
        }
        if (com == "prev"){ 
            if(current<10){ 
                current = 0;
            }
            else {
                current -= 10;
            }
        }
        else { 
            current += 10;
            if (current > videolen) { 
                current = videolen;
            }
        }
    } 
    
    if (current<=opend && current >= opstart){ 
        current = opend; 
    }
    
    int min_ = current/60; 
    int sec_ = current%60; 
    
    string answer = ""; 
    answer = 
        (min_ < 10 ? "0" + to_string(min_) : to_string(min_)) + ":" +
        (sec_ < 10 ? "0" + to_string(sec_) : to_string(sec_));
    
    return answer;
}

// C++ 프로그램의 필수 시작점 (이게 없어서 오류가 났던 겁니다!)
int main() {
    // 프로그래머스 예제 테스트 케이스를 넣어봤습니다.
    string video_len = "34:33";
    string pos = "13:00";
    string op_start = "00:55";
    string op_end = "02:55";
    vector<string> commands = {"next", "prev"};

    // 함수 실행 및 결과 출력
    string result = solution(video_len, pos, op_start, op_end, commands);
    cout << "실행 결과: " << result << endl;

    return 0;
}