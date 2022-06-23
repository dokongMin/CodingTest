//
// Created by 정민환 on 2022/04/29.
//

#include<stdio.h>
#include<algorithm>
using namespace std;
int n;

int Count(int len, int a[]){
    int i, cnt=1, pos = a[1];
    for(i=2;i<=n;i++){
        if(a[i]-pos >= len){
            cnt ++;
            pos = a[i];
        }
    }
    return cnt;
}

int main(){
    int i, m, lt=1, rt=0, mid, res;
    cin >> n;
    int *a = new int[n+1];
    for(i=1;i<n;i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    rt = a[n];

    while(lt <= rt){
        mid = (lt+rt)/2;
        if(Count(mid, a) >= m){
            res = mid;
            lt = mid+1;
        }
        else
            rt = mid -1;
    }
}
