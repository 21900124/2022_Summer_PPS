#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    string number = "";
    int index[10] = {0};
    int count = 0;
    int max = 0;

    cin >> number;

    for(int i = 0; i < number.size(); i++){
        index[number.at(i)-'0']++;

        if(number.at(i) - '0' == 6 || number.at(i) - '0' == 9){
            count++;
        }
    }
    for(int i = 0; i < 10; i++){
        if(i != 6 && i != 9 && max < index[i]){
            max = index[i];
        }
    }
    if(max < (count + 1) / 2){
        max = (count + 1) / 2;
    }
    cout << max << endl;
    return 0;
}