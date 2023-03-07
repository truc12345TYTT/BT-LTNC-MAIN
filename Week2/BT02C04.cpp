
#include <iostream>

using namespace std;

void renderTriagle(int n){
    for (int i = n - 1; i >= 0; i --){
        for (int j = - n + 1; j < n; j ++){
            if (abs(i) >= abs(j)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    renderTriagle(n);
    return 0;
}

