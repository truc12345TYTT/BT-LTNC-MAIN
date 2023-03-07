#include <iostream>
#include <string>

using namespace std;

string inverseString(string s){
    string res = "";
    for (int i = s.length() - 1; i >= 0; i --) res += s[i];
    return res;
}

int findInverseString(string s[], int test){
    for (int i = 0; i < test - 1; i ++){
        for (int j = i + 1; j < test; j ++){
           // cout << s[i] << ' ' << inverseString(s[j]) << endl;
            if (s[i] == inverseString(s[j]))
                return i;
        }
    }
    return 0;
}

int main(){
    int test; cin >> test;
    string s[test];
    for (int i = 0; i < test; i ++) cin >> s[i];
    int cnt = findInverseString(s, test);
    int len = s[cnt].length();
    cout << len << ' ' << s[cnt][len/2] << endl;

    return 0;
}
