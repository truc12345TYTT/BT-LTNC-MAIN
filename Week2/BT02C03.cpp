
#include <iostream>

using namespace std;

void renderTriagle(int n){
    for (int i = 0; i < n; i ++){
        for (int j = - n + 1; j < n; j ++){
            if (i >= abs(j)) cout << "*";
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
