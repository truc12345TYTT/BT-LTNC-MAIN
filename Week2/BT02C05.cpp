#include <iostream>

using namespace std;

string under10[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string under20[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string under100[11] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
int ABS(int n){
    if (n < 0) return -n;
    return n;
}

string readNumber(int n){
    string readNum = "";
    int absN = ABS(n);
    if (n == 0) return readNum;
    if (absN < 10){
        readNum += under10[absN];
        return readNum;
    }
   // int temp = absN;
    if (absN < 20 && absN >= 10){
        readNum += under20[absN%10];
        return readNum;
    }
    if (absN >= 20 && absN < 100){
        readNum += under100[absN/10] + "-";
        return readNum + readNumber(n%10);
    }
    if (absN >= 100 && absN < 1000){
        readNum = under10[absN/100] + " hundred ";
        return readNum + readNumber(n%100);
    }
    if (absN >= 1000 && absN < 1000000){
        readNum = readNumber(n/1000) + " thousand ";
        return readNum + readNumber(n%1000);
    }
    if (absN >= 1000000){
        readNum = readNumber(n/1000000) + " million ";
        return readNum + readNumber(n%1000000);
    }
    return "";
}

int main(){
    int n;
    cin >> n;
    if (n < 0) cout << "negative ";
    cout << readNumber(n);
    return 0;
}
