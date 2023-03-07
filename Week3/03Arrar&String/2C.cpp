#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    for (int i = 0; i < len/2; i ++){
        //cout << ch[i] << ' ' << ch[len - i] << endl;
        if (ch[i] != ch[len - i - 1]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
