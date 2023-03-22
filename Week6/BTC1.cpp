#include <iostream>
#include <cstring>

using namespace std;

struct String{
    int lengthString;
    char* str = new char[lengthString ];
    String(const char* _str){
        lengthString = strlen(_str);
        strncpy(str, _str, lengthString );
    }

    void print(){
        cout << "length: " << lengthString << endl;
        cout << "String: " << str << endl;
    }
 /*   void append(const char* appendString){
        int lengtemp = lengthString + strlen(appendString) + 2;
        const char* temp = new char[lengtemp];
        temp = appendString;
        lengthString = lengtemp;
        str = temp;
       // cout << str;
        delete [] temp;
    }*/

    ~String(){
        delete str;
    }
};

int main(){
    String s("Linh thui");
    s.print();
   // s.append("there");
  //  s.print();
    //s.~String();


    return 0;
}
