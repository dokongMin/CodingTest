//
// Created by 정민환 on 2022/07/07.
//

#include <iostream>

using namespace std;

int n = 5;
int segments[5][2] = {{1,3},{2,4},{5,8},{6,9},{7,10}};

int main (){
    int ans = 100;
    for (int i = 0; i < n; i++) {
            int counting[11]={};
        for (int j = i+1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if(i == k || k == j)
                    continue;

                int x1 = segments[k][0];
                int x2 = segments[k][1];

                for(int l= x1; l<=x2;l++)
                    counting[l]++;
            }
        }
        int max_cnt = 0;
        for (int j = 0; j < 11; j++) {
            max_cnt = max(max_cnt, counting[j]);
        }
            ans = min(max_cnt, ans);
    }
    cout << ans;


}