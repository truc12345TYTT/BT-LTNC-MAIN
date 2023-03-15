#include <iostream>

using namespace std;

/*
/// Bai 1A
void sizeArray(int a[]){
    cout << sizeof(a) << endl;
}

int main(){
    int a[7];
    cout << sizeof(a) << endl;
    sizeArray(a);
    return 0;
}*/

///Bai 2
int count_even(int *a, int n){
    int cnt = 0;
    for (int i = 0; i < n; i ++)
        if (a[i]%2 == 0) cnt ++
    return cnt;
}
