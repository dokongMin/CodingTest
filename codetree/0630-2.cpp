//
// Created by 정민환 on 2022/06/30.
//
#include <iostream>

using namespace std;


int main(){

     int a1,b1,c1;
     int a2,b2,c2;
     int n;
     cin >> n;
     cin >> a1 >> b1 >> c1;
     cin >> a2 >> b2 >> c2;
     int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if(abs(a1 - i) <=2 || abs(a1 -i) >= n -2 && abs(b1-j) <= 2 || abs(b1-j) >= n-2);
            }
        }
    }
}