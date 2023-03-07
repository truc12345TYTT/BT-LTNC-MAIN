#include <iostream>

using namespace std;

void binaryInsertion(int a[], int n){
    for (int i = 1; i < n; i ++){
        int left = 0, right = i - 1, temp = a[i];
        while (left <= right){
            int mid = (left + right)/2;
            if (temp < a[mid]) right = mid - 1;
            else left = mid + 1;
        }
        for (int j = i - 1; j >= left; j --)
            a[j + 1] = a[j];
        a[left] = temp;
    }
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    binaryInsertion(a,n);
        cout << "\nBinaryInsertionSort: ";
    for (int i = 0; i < n; i ++)
        cout << a[i] << ' ';

    return 0;
}
