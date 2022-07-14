#include <iostream>
using namespace std;

int main(){
    int i = 0, prev = 0, count = 0;
    int num[10], div[10];

    for(i = 0; i < 10; i++){
        cin >> num[i];
        div[i] = num[i] % 42;
    }
    for(i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(div[i] != div[j]){
            count++;
        }
        }
        prev++;
    }
    cout << count << endl;

    return 0;
}
