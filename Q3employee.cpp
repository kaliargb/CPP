#include <iostream>
using namespace std;
// Base class
class Employee {
public:
    string name;
    int id;

    void getData(string n, int i) {
        name = n;
        id = i;
    }

    virtual void showSalary() {
        cout << "Salary details not available.\n";
    }
};

// Derived class for permanent employee
class PermanentEmployee : public Employee {
public:
    float basic, hra, da;

    void setSalary(float b, float h, float d) {
        basic = b;
        hra = h;
        da = d;
    }

    void showSalary() override {
        float total = basic + hra + da;
        cout << "Permanent Employee Salary: " << total << endl;
    }
};

// Derived class for contract employee
class ContractEmployee : public Employee {
public:
    float hourlyRate;
    int hours;

    void setSalary(float rate, int hrs) {
        hourlyRate = rate;
        hours = hrs;
    }

    void showSalary() override {
        float total = hourlyRate * hours;
        cout << "Contract Employee Salary: " << total << endl;
    }
};

int main() {
    PermanentEmployee p;
    p.getData("Amit", 101);
    p.setSalary(30000, 5000, 2000);
    cout << "\nPermanent Employee:\n";
    cout << "Name: " << p.name << "\nID: " << p.id << endl;
    p.showSalary();

    ContractEmployee c;
    c.getData("Riya", 102);
    c.setSalary(500, 160);
    cout << "\nContract Employee:\n";
    cout << "Name: " << c.name << "\nID: " << c.id << endl;
    c.showSalary();

    return 0;
}

