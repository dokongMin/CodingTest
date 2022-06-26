//
// Created by 정민환 on 2022/06/25.
//
#include <iostream>
#define MAX 20
using namespace std;

int n;
int arr[MAX][MAX];
int main(){
    int maxCnt = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        for (int j = 0; j <n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n-2; j++) {
            for(int k =0; k<n; k++){
                for(int l =0; l<n-2;l++){
                    if(i == k && abs(j-l)<=2)
                        continue;
                    int cnt1 = arr[i][j] + arr[i][j+1] + arr[i][j+2];
                    int cnt2 = arr[k][l] + arr[k][l+1] + arr[k][l+2];
                    maxCnt = max(maxCnt, cnt1 + cnt2);
                }
            }
        }
        //ss
    }
    cout << maxCnt;
}