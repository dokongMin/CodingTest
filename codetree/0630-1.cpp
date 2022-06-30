//
// Created by 정민환 on 2022/06/30.
//
#include <iostream>
using namespace std;

int num[4] = {1,5,3,6};

int getMin(int i,int j){
        int sum = num[i] + num[j];
        int sum2 = 0;
    for (int k = 0; k < 4; k++) {
        sum2 += num[k];
    }
    sum2 -= sum;
    return abs(sum - sum2);
}
int main(){

    int mindiff = 100;
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 4; j++) {
            mindiff = min(mindiff, getMin(i,j));
        }
    }
    cout << mindiff;

}