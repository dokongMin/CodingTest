//
// Created by 정민환 on 2022/07/06.
//
#include <iostream>
#include <algorithm>
using namespace std;

int n = 5;
int segments[5][2] = {{1,3},{2,4},{5,8},{6,9},{7,10}};


int main(){
    int ans = 100;

    for (int i = 0; i < n; i++) {
        int counting[11] = {};
        for (int j = 0; j < n; j++) {
                if(j==i)
                    continue;
                int x1 = segments[j][0];
                int x2 = segments[j][1];
            for (int k = x1; k <= x2; k++) {
                counting[k]++;
            }
        }
        int max_cnt = 0;
        for (int j = 0; j < 11; j++) {      // 선분이 하나씩 빠진 후 계산을 해야 하므로 for 문 밖에다 하면 모든 경우의 수 선분이 합쳐진다.
            max_cnt = max(max_cnt, counting[j]);
        }
        ans = min(max_cnt, ans);
    }

    cout << ans;
}