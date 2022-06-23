////
//// Created by 정민환 on 2022/06/24.
////
//#include <iostream>
//
//using namespace std;
//#define DIR 8
//
//bool InRange(int x, int y);
//
//int a[19][19];
//int dx[DIR] = {1, 1, 0, -1, -1, -1, 0, 1};
//int dy[DIR] = {0, -1, -1, -1, 0, 1, 1, 1};
//
//int main() {
//    int i, j, k;
//    for (i = 0; i < 19; i++) {
//        for (int j = 0; j < 19; j++) {
//            cin >> a[i][j];
//        }
//    }
//
//    for (i = 0; i < 19; i++) {
//        for (j = 0; j < 19; j++) {
//
//            if (a[i][j] == 0)
//                continue;
//
//            for (k = 0; k < DIR; k++) {
//                int cnt = 1;
//                int cntx = i;
//                int cnty = j;
//                while (true) {
//                    int nx = cntx + dx[i];
//                    int ny = cnty + dy[i];
//
//                    if (InRange(i, j) == false)
//                        break;
//                    if (a[nx][ny] != a[i][j])
//                        break;
//                    cnt++;
//                    cntx = nx;
//                    cnty = ny;
//                }
//                if (cnt == 5) {
//                    cout << a[i][j] << endl;
//                    cout << "wow";
//                }
//            }
//        }
//    }
//}
//
//bool InRange(int x, int y) {
//    if (x > 19 || y > 19)
//        return false;
//    else
//        return true;
//}