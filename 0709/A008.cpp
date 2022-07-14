#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n; // 몇 번 반복할 것인지
    int i, j;
    int count = 0, numScore; // 평균을 넘는 학생들의 수
    double avg = 0;

    cin >> n;
   

    for(i = 0; i < n; i++){
        avg = 0;
        
        cin >> numScore;

        double score[numScore]; // 점수를 저장함

        for(j = 0; j < numScore; j++){
            cin >> score[j];
            avg += score[j];
        }

        avg /= numScore;
        count = 0;

        for(j = 0; j < numScore; j++){
            if(score[j] > avg){
                count++;
            }
        }
        printf("%.3f%\n",100.0 / numScore * count);
    }
    return 0;
}