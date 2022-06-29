//
// Created by 정민환 on 2022/06/29.
//
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 100
int person[MAX+1];

int main() {

    int n, dir;
    char input;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir >> input;
        if (input == 'G'){
            person[dir] = 1;
        }
        else if (input == 'H')
            person[dir] = 2;
    }

    int max_sum = 0;
    for (int i = 0; i <= MAX; i++) {
        int sum = 0;
        for (int j = i+1; j <= MAX-1; j++) {
            if(person[i] == 0 || person[j] == 0)
                continue;
            int cnt_g = 0;
            int cnt_h = 0;
            for (int k = i; k < j; k++) {
                if(person[k] == 1)
                    cnt_g++;
                if(person[k] == 2)
                    cnt_h++;
            }
            if(cnt_g == 0 || cnt_h == 0 || cnt_g == cnt_h) {
                int len = j - i;
                max_sum = max(max_sum, len);
            }
        }
    }
    cout << max_sum;
}