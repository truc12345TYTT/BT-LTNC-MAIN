#include <iostream>

using namespace std;

int sumLeft[100005], sumRight[100005];
int main(){
    int test;
    cin >> test;
    for (int t = 1; t <= test; t ++){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i ++){
            cin >> a[i];
            sumLeft[i + 1] = sumLeft[i] + a[i];
        }
        for (int i = n - 2; i >= 0; i --) sumRight[i] = sumRight[i + 1] + a[i + 1];
        for (int i = 0; i < n; i ++){
            if (sumLeft[i] == sumRight[i]){
                cout << "YES\n";
                break;
            }
            if (i == n - 1) cout << "NO\n";
        }
        for (int i = 0; i <= n; i ++){
            sumLeft[i] = 0;
            sumRight[i] = 0;
        }

    }
    return 0;
}
