//문제링크 https://school.programmers.co.kr/learn/courses/30/lessons/340213

/* pseudo code
1. 입력 받기
2. 분을 초로 변환하기
3. command -> vector?
4. command 수행할때마다 현재위치 확인후 연산.(오프닝건너뛰기)
5. 마지막 초 60으로 나눠서 분, 초 변환 (itos) 
*/

#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    //make sec, stoi
    int current = stoi(pos.substr(0,2))*60+stoi(pos.substr(3,2));
    int videolen = stoi(video_len.substr(0,2))*60+stoi(video_len.substr(3,2));
    int opstart = stoi(op_start.substr(0,2))*60+stoi(op_start.substr(3,2));
    int opend = stoi(op_end.substr(0,2))*60+stoi(op_end.substr(3,2));
    //0~1 min ,2 == ':', 3~4 = sec
//string to integer
    
    //check commands
    for ( string com : commands ){ 
        if (current<=opend && current >= opstart){
        current = opend; //if in opening change to end
    }
        if (com == "prev"){ // 10sec back case
            if(current<10){ // 10초보다 작을경우 0초기화
                current = 0;
            }
            else 
                current -= 10;
        }
        else { // 10sec after case
            current += 10;
            if (current > videolen) { //over => end
                current = videolen;
            }
        }
    } // command circle end
    
    if (current<=opend && current >= opstart){ //check condition
        current = opend; //if in opening change to end
    }
    
    int min_ = current/60; // min
    int sec_ = current%60; // sec
    
    string answer = ""; // make string
    answer = // under10 => '0' plus
        (min_ < 10 ? "0" + to_string(min_) : to_string(min_)) + ":" +
        (sec_ < 10 ? "0" + to_string(sec_) : to_string(sec_));
    
    return answer;
}

/* study log
vector 를 쓰면 가변 list 가능
itos 라는 함수는 없음 to_string
*/
