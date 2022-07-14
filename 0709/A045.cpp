#include <iostream>
#include <string>

using namespace std;

int toUpper(int c){
    if((c >= 'a') && (c <= 'z')){
        c = c - 'a' + 'A';
    }
    return c;
}

int main(){
    int alphabet[26] = {};
    int max = 0, count = 0;
    int idx = 0;
    char c;

    string str;

    cin >> str;
    for(int i = 0; i < str.length(); i++){
        str[i] = toUpper(str[i]);
    }
    for(int i = 0; i < str.length(); i++){
        alphabet[str[i]-'A']++;
    }

    for(int i = 0; i < 26; i++){
        if(max == alphabet[i]){
            c = '?';
        }   
        else if(max < alphabet[i]){
            max = alphabet[i];
            c = 'A' + i;
        }
    }
    cout << c << endl;
    return 0;
}