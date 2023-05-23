#include <iostream>
#include <cstring>

using namespace std;

struct String{
    int lengthString;
    char* str = new char[lengthString];
    String(const char* _str){
       // cerr << strlen(_str) << endl;
        lengthString = strlen(_str);
     //   str = new char[lengthString];
     //   str = _str;
        strcpy(str, _str);
        cout << "Creat (" << str << ")at " << this << endl;
    }

    void print(){
        cerr << "length: " << lengthString << endl;
        cerr << "String: " << str << endl;
    }
    void append(const char* appendString){
        int lengtemp = lengthString + strlen(appendString);
        char* temp = new char[lengtemp];
        strcpy(temp, str);
        strcat(temp, appendString);
        lengthString = lengtemp;
        str = new char[lengthString];
        strcpy(str, temp);

       // cout << str;
        delete [] temp;
    }

   ~String(){
        delete str;
        cerr << "delete (" << str << ") at " << this << endl;
    }
};

int main(){
    String s("Hi there   there");
    s.print();
    s.append("there");
    s.print();


    return 0;
}
