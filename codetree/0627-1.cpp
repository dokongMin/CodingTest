//
// Created by 정민환 on 2022/06/27.
//
#include <iostream>
#include <algorithm>
using namespace std;

int R = 10, k = 5;
int arr[6] = {1, 7, 2, 9, 4, 10};
int placed[11];

int main() {
    for(int i = 0; i < 6; i++)
        placed[arr[i]] = 1;

    int max_cnt = 0;
    for(int i = 1; i <= R - k; i++) {
        int candy_num = 0;
        for(int j = i; j < i + k; j++)
            candy_num += placed[j];

        max_cnt = max(max_cnt, candy_num);
    }

    cout << max_cnt;

    return 0;
}