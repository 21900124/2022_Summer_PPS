#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int doorNum, way;
    int open[4];

    cin >> doorNum >> way;

    if(doorNum > 5){
        cout << "Love is open door\n";
    }
    else{
        if(way == 0){
            for(int i = 0; i < doorNum-1; i++){
                if(i == 0){
                    open[i] = 1;
                }
                if(open[i-1] == 0){
                    open[i] = 1;
                }
                if(open[i-1] == 1){
                    open[i] = 0;
                }
                cout << open[i] << endl;
            }
        }
        else{ // way == 1
            for(int i = 0; i < doorNum-1; i++){
                if(i == 0){
                    open[i] = 0;
                }
                if(open[i-1] == 0){
                    open[i] = 1;
                }
                if(open[i-1] == 1){
                    open[i] = 0;
                }
                cout << open[i] << endl;
            }
        }
    }

    return 0;
}