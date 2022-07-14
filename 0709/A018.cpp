#include <iostream>
#include <algorithm>

using namespace std;

int main(){
   
    int n;
    int a[50];
    int b[50];
    int arr[50] = {0,};
    int result = 0; // 결과저장
    int max = 0; // 최대값
    int index = 0; // 최대값일때 인덱스

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    // 배열 a를 가장 작은 숫자 순서대로 배열
    sort(a,a+n);

    for(int i = 0; i < n; i++){
        max = 0; // 최댓값 초기화
        index = 0; // 최댓값의 인덱스 초기화

        for(int j = 0; j < n; j++){
            // array B의 원소 중 가장 큰 것을 찾는다. 단, 이미 찾은 원소는 제외한다.
            if(max < b[j] && arr[j] == 0){ 
                max = b[j];
                index = j; // 최댓값의 인덱스 저장
            }
        }
        arr[index] = 1; 
        result += a[i] * max;
    }
    cout << result << endl;
    

    return 0;
}