#include <iostream>

using namespace std;

void draw(int n){
    for (int i = 1; i <= n; i ++){
        int cnt = i;
        for (int j = 1; j <= n; j ++){
            if (cnt <= n) cout << cnt ++ << ' ';
            else cout << cnt++ - n << ' ';
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    draw(n);
    return 0;
}
