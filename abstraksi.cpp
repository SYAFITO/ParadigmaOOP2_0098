#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

    // method untuk mengisi nilai
    // private member
    void seXY(string a, string b) {
        a = a;
        y = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};