//
// Created by 정민환 on 2022/07/13.
//
#include<iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    char a[100];
    int flag =1;
    cin >> a;
    stack<char> s;
    for (int i = 0; a[i] != '\0'; i++) {
        if(a[i] == '(')
            s.push(a[i]);
        else{
            if(a[i] == ')')
            s.pop();
            else if(s.empty()){
                cout << "NO";
                flag = 0;
                break;
            }
        }
    }
    if(s.empty() && flag == 1)
        cout << "YES";
    else if(!s.empty() && flag == 1)
        cout << "NO";


}