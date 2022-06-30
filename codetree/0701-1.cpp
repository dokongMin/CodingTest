//
// Created by 정민환 on 2022/07/01.
//
#include <iostream>

using namespace std;
#define MAX 10
int n;
int a[MAX], b[MAX], c[MAX];

int main(){

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int cnt = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++) {
                if(i == j || j == k || j == i)
                    continue;
                bool succesed = true;
                for (int l = 0; l < n; l++) {
                    int x = a[l] / 100;
                    int y = a[l] / 10 % 10;
                    int z = a[l] % 10;
                    int cnt1 = 0, cnt2 = 0;
                    if(x == i )
                        cnt1++;
                    if (y == j)
                        cnt1++;
                    if (z == k)
                        cnt1++;
                    if(x == j || x == k)
                        cnt2++;
                    if(y == i || y == k)
                        cnt2++;
                    if(z == i || z == j)
                        cnt2++;

                    if(cnt1 != b[l] || cnt2 != c[l]){
                        succesed = false;
                        break;
                    }
                }
                if(succesed == true)
                    cnt++;
            }
        }
    }
    cout << cnt;

}