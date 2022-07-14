#include <iostream>
#include <string>

using namespace std;

int main(){
   
    int n;
    double num;
    string str;

    cin >> n;
    for(int i = 0; i < n; i++){
       cin >> num;
       getline(cin,str);
       
        for(int j = 0; j < str.size(); j++){
            if(str[j] == '@'){
                num *= 3;
            }
            if(str[j] == '%'){
                num += 5;
            }
            if(str[j] == '#'){
                num -= 7;
            }
        }
        printf("%.2f\n",num);
    }
    

    return 0;
}