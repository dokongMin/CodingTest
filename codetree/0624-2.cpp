//
// Created by 정민환 on 2022/06/24.
//
#include <iostream>

using namespace std;
#define DIR 8
bool InRange(int x, int y);
char a[5][5];
int dx[DIR] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[DIR] = {0, -1, -1, -1, 0, 1, 1, 1};

int main(){
        int i, j, k;
        for(i = 0; i<5;i++){
            for(j=0;j<5;j++){
                cin >> a[i][j];
            }
        }

        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                int Ecnt = 0;
                if(a[i][j] != 'L')
                    break;

                for(k=0;k<DIR;k++){
                    int cnt = 1;
                    int cntx = i;
                    int cnty = j;

                    while(true){
                        int nx = cntx + dx[k];
                        int ny = cnty + dy[k];

                        if(a[nx][ny] != 'E')
                            break;
                        if(InRange(nx, ny)==false)
                            break;

                        cnt ++;
                        cntx = nx;
                        cnty = ny;

                        if(cnt >= 3)
                            Ecnt ++;
                    }
                }
            }
        }
}
bool InRange(int x, int y){
    if(x >5 || y > 5)
        return false;
}