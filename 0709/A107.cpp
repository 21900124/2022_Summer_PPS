#include <iostream>

using namespace std;

int main(){
    
    int a, b;
    int arr[1001];
    int k = 1, sum = 0;

    cin >> a >> b;

    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= i; j++){
            arr[k] = i;
            if(k > 1000) break;
            k++;
        }
    }
    for(int i = a; i <= b; i++){
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}