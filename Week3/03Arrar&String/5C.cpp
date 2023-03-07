#include <iostream>

using namespace std;

void Swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
int a[10000][10000];
int main(){
    int m, n;
    cin >> m >> n;
    int temp = 1;

    int col = 0 , row = 0, t = 0;
    while(temp <= m*n){
        for(;col < n - t; col ++) a[row][col] = temp ++;
        row ++;
        for(; row < m - t; row ++) a[row][col - 1] = temp ++;
        col --;
        for(;col > t; col --) a[row - 1][col] = temp ++;
      //  cout << col << ' ' << row << ' ' << t << endl;
        row --;
        for(;row > t; row --) a[row][col] = temp ++;
        t ++;
        row ++;
    }

    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
