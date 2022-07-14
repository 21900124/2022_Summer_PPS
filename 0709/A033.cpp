#include <iostream>

using namespace std;

int main(){
   int n[5][4], i, j;
   int sum[5] = {};
   int maxScore = 0, maxIndex = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            cin >> n[i][j];
            sum[i] += n[i][j];
        }
        if(maxScore < sum[i]){
            maxScore = sum[i];
            maxIndex = i + 1;
        }
    }
    cout << maxIndex << " " << maxScore << endl;

    return 0;
}