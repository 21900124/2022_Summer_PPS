#include <iostream>

using namespace std;

int main(){
    
    int in, out;
    int station[4];
    int max = 0;


    for(int i = 0; i < 4; i++){
        cin >> out >> in;

        if(i == 0){
            station[i] = in - out;
        }
        else{
            station[i] = station[i-1] - out + in;
        }
        if(max < station[i]){
            max = station[i];
        }
    }
    cout << max << endl;

    return 0;
}