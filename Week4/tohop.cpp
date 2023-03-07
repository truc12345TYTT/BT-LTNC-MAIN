#include <iostream>

using namespace std;

int n, k;
bool use[300];
char c[100];

void in(){
    for (int i = 1; i <= k; i ++)
        cout << char(c[i] + 'a' - 1);
    cout << endl;
}

void tohop(int i){
    for (int j = c[i - 1] + 1; j <= n - k + i; j ++){
        if (use[j] == 0){
            c[i] = j;
            use[j] = 1;
        }
        if (i == k) in();
        else tohop(i + 1);
        use[j] = 0;
    }
}

int main(){
    cin >> n >> k;
    tohop(1);
    return 0;
}
