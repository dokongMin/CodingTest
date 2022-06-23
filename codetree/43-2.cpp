////
//// Created by 정민환 on 2022/04/29.
////
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//int a[1001], n;
//
//int Count(int s){
//    int i, sum =0, cnt = 0;
//    for(i=0;i<n;i++){
//        if(sum + a[i] > s){
//            sum = a[i];
//            cnt ++;
//        }else
//            sum += a[i];
//    }
//    return cnt;
//}
//
//
//int main(){
//
//    int m, i, lt =1, rt =0, mid, res, maxx = -210000;
//    cin >> n >> m;
//    for(i=0;i<n;i++){
//        cin >> a[i];
//        rt = a[i];
//        if(a[i] > maxx)
//        maxx = a[i];
//    }
//    while(lt <= rt){
//        mid = lt + rt / 2;
//        if(mid >= maxx && Count(mid) <= m){
//            res = mid;
//            rt = mid -1;
//        } else
//            lt = mid +1;
//    }
//
//}