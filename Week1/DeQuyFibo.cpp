#include <iostream>

using namespace std;

int fibo(int n){
    int f0 = 0, f1 = 1, f2;
    if ( n == 1)
        return 0;
    if ( n == 2)
        return 1;
    if ( n == 3)
        return 1;
    f2 = f0 + f1; /// 0 1 1 2 3 5 8
    f0 = f1;
    f1 = f2;

    return fibo(n-2)+ fibo(n - 1); ///
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}
