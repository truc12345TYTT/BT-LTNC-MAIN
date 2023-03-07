#include <iostream>

using namespace std;

int n, k;
bool use[300];
int c[100];

void in(){
    for (int i = 1; i <= k; i ++)
        cout << c[i];
    cout << endl;
}

int cnt = 0;
void hoanvi(int i){
    for (int j = 1; j <= n; j ++){
        if (use[j] == 0){
            c[i] = j;
            use[j] = 1;
            if (i == k){
                in();
                cnt ++;
            }
            else hoanvi(i + 1);
            use[j] = 0;
        }
    }
}

int main(){
    cin >> n >> k;
    hoanvi(1);
    cout << cnt;
    return 0;
}

