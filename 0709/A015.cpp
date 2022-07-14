#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int num[5];
    int sum = 0;
    int checkNum = 0;

    for(int i = 0; i < 5; i++){
        cin >> num[i];
        num[i] = num[i] * num[i];

        sum += num[i];
    }
    checkNum = sum % 10;
    cout << checkNum << endl;

    return 0;
}