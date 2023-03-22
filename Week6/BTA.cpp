#include <iostream>

using namespace std;

/*
/// Bai 1
struct Point{
    int x, y;
    void print(){
        cout << x << ' ' << y << endl;
    }
};

int main(){
    Point Demo = {2, 3};
    Demo.print();

    return 0;
}
*/

/*
///Bai 2
struct Point{
    int x, y;
    void print(){
        cout << x << ' ' << y << endl;
    }
};

void Thamtri(Point D){
    cout << &D.x << ' ' << &D.y << endl;
}

void Thambien(Point &D){
    cout << &D.x << ' ' << &D.y << endl;
}

int main(){
    Point Demo = {3, 4};
    cout << "Tham tri "; Thamtri(Demo);
    cout << "Tham bien "; Thambien(Demo);

    return 0;
}
*/

/*
struct Point{
    const int x, y;
    void print(){
        cout << x << ' ' << y << endl;
    };
    double mid_point(){
        return 1.0*(x + y)/2;
    }
};

int main(){
    Point Demo = {2, 3};
    Demo.print();
    cout << Demo.mid_point();

    return 0;
}
*/

/*
///Bai 4
struct Point{
    int x, y;
    void print(){
        cout << &x << ' ' << &y << endl;
    }
};

int main(){
    Point Demo = {1, 10};
    Demo.print();

    return 0;
}
// Nhan xet: x va y thuoc kieu du lieu int nen chiem 4 bit trong bo nho => x, y cach nhau 4 bit
*/


///Bai 5
struct Point{
    int x, y;
    void print(){
        cout << &x << ' ' << &y << endl;
    }
};

int main(){
    Point Demo = {2, 3};
    Point cpyDemo = Demo;
    cout << "Demo      "; Demo.print();
    cout << "cpyDemo   "; cpyDemo.print();
    int arrayDemo[2];
    arrayDemo[0] = Demo.x;  arrayDemo[1] = Demo.y;
    cout << "arrayDemo " << &Demo.x << ' ' << &Demo.y;

    return 0;
}



