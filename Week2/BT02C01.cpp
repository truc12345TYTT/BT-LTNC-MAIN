#include <iostream>

using namespace std;

int sqrtInt(int n){
    for (int i = 2; i < n; i ++){
        if (i*i > n) return i - 1;
    }
    return 1;
}

bool checkPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrtInt(n); i ++)
        if (n%i == 0) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    if (checkPrime(n)) cout << "YES";
    else cout << "NO";
}
