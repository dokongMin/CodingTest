//
// Created by 정민환 on 2022/06/29.
//
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_NUM 100

int basket[MAX_NUM+1];
int n, k;
int main(){

    int cntCandy, dirBasket;


    cin >> n >> k;
    for (int i = 0; i < n; i++) {
            cin >>  cntCandy >> dirBasket;
            basket[dirBasket] = cntCandy;
    }
    int max_sum = 0;
    for (int i = 0; i <= MAX_NUM; i++) {
        int sum = 0;
        for (int j = i-k; j <= i+k; j++)
            if(j>=0 && j<=MAX_NUM)
                sum += basket[j];

        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
}