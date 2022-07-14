#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int length = 0;
    int count = 0, mod = 0; 
    string strtemp;

    cin >> str;

    length = str.length();
    mod = length % 10;
    length /= 10;

    while(length >= 0){

        if(length != 0){
            strtemp = str.substr(10 * count,10);

            for(int i = 0; i < 10; i++){
                cout << strtemp[i];
            }
            cout << "\n";
        }
        else{ 
            strtemp = str.substr(10 * count, mod);
            for(int i = 0; i < mod; i++){
                cout << strtemp[i];
            }
            cout << "\n";
        }
        count++;
        length--;
    }
    return 0;
}