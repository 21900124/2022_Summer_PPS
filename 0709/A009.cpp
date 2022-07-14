#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if(s.length() == 4 || s.length() == 6){
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i]) == 0){
                answer = false;
                break;
            }
        }
    }
    else{
        answer = false;
    }
    return answer;
}

int main(){
    string s;
    bool result;

    cin >> s;
    result = solution(s);

    if(result == 1){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }
    
    return 0;
}