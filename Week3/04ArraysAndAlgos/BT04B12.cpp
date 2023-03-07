#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool prime[n + 1];
    for (int i = 0; i <= n; i ++) prime[i] = 1;
    for (int i = 2; i <= n; i ++){
        if (prime[i] == 1){
            for (int j = i*i; j <= n; j += i) prime[j] = 0;
        }
    }
    for (int i = 2; i <= n; i ++)
        if (prime[i] == 1) cout << i << ' ';
    return 0;
}
