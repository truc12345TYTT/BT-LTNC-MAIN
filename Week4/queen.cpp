#include <iostream>

using namespace std;

int n, cot[100], cheo1[100], cheo2[100], vt[100];

void in(){
    for (int i = 1; i <= n; i ++){
        int tmp = vt[i];
        for (int j = 1; j <= n; j ++){
            if (j == tmp) cout << " * ";
            else cout << " 0 ";
        }
        cout << endl;
    }
    cout << "_____________________________________________________\n";
}

int cnt = 0;
void queen(int i){
    for (int j = 1; j <= n; j ++){
        if (cot[j] && cheo1[i - j + n] && cheo2[i + j - 1] ){
            vt[i] = j;
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
            if (i == n){
                in();
                cnt ++;
            }
            else queen(i + 1);
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
        }
    }
}

int main(){
    for (int i = 1; i <= 99; i ++){
        cot[i] = cheo1[i] = cheo2[i] = 1;
    }
    cin >> n;
    queen(1);
    cout << cnt;
    return 0;
}
