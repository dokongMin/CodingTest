//
// Created by 정민환 on 2022/07/13.
//
#include<iostream>
#include <stack>
#include <vector>
using namespace std;

//int stack[100];
//int top = -1;

//void push(int x){
//    stack[++top] = x;
//}
//
//int pop(){
//    return stack[top--];
//}

int main(){

    int n, k;
    stack<int> s;
    cin >> n >> k;
    while (n>0){
        s.push(n%k);
        n = n /k;
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
}