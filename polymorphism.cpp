#include <iostream>
#include <string>
using namespace std;

class shape {
public:
    virtual void calculate() {
        cout << "This is virtual function" << endl;
    }
};

class rectangle : public shape {
    float l, b, areaR;
public:
    void calculate() override {
        cout << "Enter length & Breadth of Rectangle:" << endl;
        cin >> l >> b;
        areaR = l * b;
        cout << "Area of Rectangle is: " << areaR << endl;
    }
};

class circle : public shape {
public:
    float r, areaC, pi = 3.14;
    void calculate() override {
        cout << "Enter the radius:" << endl;
        cin >> r;
        areaC = pi * r * r;
        cout << "Area of Circle is = " << areaC << endl;
    }
};

int main() {
    shape *ptr;
    rectangle R1;
    circle c1;

    ptr = &R1;
    ptr->calculate();

    ptr = &c1;
    ptr->calculate();  // We called this Parent Class function because we used Override function
                       // Without it, it will also run!!
}
