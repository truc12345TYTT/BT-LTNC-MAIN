#include <iostream>
using namespace std;

int dem[100000];
int main(){
    int n;
    cin >> n;
    int temp;
    while (n){
        cin >> temp;
        dem[temp] ++;
        if (dem[temp] > 1){
            cout << "Yes";
            return 0;
        }
        n --;
    }
    cout << "No";

    return 0;
}
