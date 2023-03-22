#include <iostream>

using namespace std;

int a[1000], n, sum;

void in(){
    for (int i = 1; i <= n; i ++)
        cout << a[i] << ' ';
    cout << endl;
}

void patition(int i){
    for (int j = n; j >= 1; j --){
        a[i] = j;
        sum += a[i];
        if (sum == n){
            in();
        }
        else if (sum < n) patition(i + 1);
        sum = 0;
    }
}

int main(){
    cin >> n;
    patition(1);
    return 0;
}
