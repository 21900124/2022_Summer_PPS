#include <iostream>

using namespace std;

int main(){
   
    int input[3] = {};
    int n[10] = {};
    int number = 1, remain = 0, quotient = 1;

    for(int i = 0; i< 3; i++){
        cin >> input[i];
        number *= input[i];
    }
    while(number > 0){
        remain = number % 10;
        number /= 10;
        n[remain]++; 
    }
    for(int i = 0; i < 10; i++){
        cout << n[i] << endl;
    }
    return 0;
}