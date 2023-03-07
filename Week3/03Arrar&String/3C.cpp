#include <iostream>
#include <string>

using namespace std;

string toString(int n){
    string s = "";
    while(n){
        int temp = n%10;
        s = char(temp + '0') + s;
        n /= 10;
    }
    return s;
}

bool check(int n){
    string s = toString(n);
    int len = s.length();
    for (int i = 0; i < len/2; i ++){
        //cout << ch[i] << ' ' << ch[len - i] << endl;
        if (s[i] != s[len - i - 1])
            return 0;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    while(n){
        int a, b, dem = 0;
        cin >> a >> b;
        for ( int i = a; i <= b; i ++){
            if (check(i)) dem ++;
        }
        cout << dem << endl;
        n --;
    }
    return 0;
}
