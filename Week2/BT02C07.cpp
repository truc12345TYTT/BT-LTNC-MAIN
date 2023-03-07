#include <iostream>

using namespace std;

void DistinctNumbers(){
    int n = -1, tmp, choice = 0;
    while(true){

        tmp = n;

        cin >> n;

        if (n == -1){
            cout << n << ' ';
            return;
        }

        choice ++;
        if (choice == 1){
            cout << n << ' ';
            continue;
        }

        if (tmp != n) cout << n << ' ';
    }
}

int main(){
    DistinctNumbers();
    return 0;
}
