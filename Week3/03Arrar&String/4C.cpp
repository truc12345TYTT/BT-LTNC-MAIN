#include <iostream>
#include <cstring>

using namespace std;

char res[1000][1000];
int main(){
    int m,n;
    cin >> m >> n;
    char boom[m + 3][n + 3];
    for (int i = 1; i <= m; i ++)
        for (int j = 1; j <= n; j ++)
            cin >> boom[i][j];


    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            if (boom[i][j] == '*'){
                res[i][j] = '*';
                continue;
            }
            int temp = 0;
            if (boom[i - 1][j - 1] == '*') temp ++;
            if (boom[i - 1][j] == '*') temp ++;
            if (boom[i - 1][j + 1] == '*') temp ++;
            if (boom[i][j - 1] == '*') temp ++;
            if (boom[i][j + 1] == '*') temp ++;
            if (boom[i + 1][j - 1] == '*') temp ++;
            if (boom[i + 1][j] == '*') temp ++;
            if (boom[i + 1][j + 1] == '*') temp ++;
            res[i][j] = char(temp + '0');
           // cout << "test " << temp << ' ' << res[i][j] << endl;
        }
    }

    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
