//
// Created by 정민환 on 2022/07/07.
//
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int start[1001];
    int end[1001];

    int ans = 0;
    for (int i = 0; i < n; i++) {
            cin >> start[i] >> end[i];
    }

    for (int i = 0; i < n; i++) {
        int count[1001] = {};
        for (int j = 0; j < n; j++) {
            if(i == j)
                continue;
            for (int k = start[j]; k<end[j]; k++) {
                    count[k]++;
            }
        }
        int time = 0;
        for (int j = 1; j < 1001; j++) {
                if(count[j] > 0 )
                    time++;
        }
        ans = max(ans, time);
    }
    cout << ans;
}