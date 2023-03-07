#include <iostream>

using namespace std;

void renderTriagle(int n){
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            if (j >= i) cout << "*";
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
