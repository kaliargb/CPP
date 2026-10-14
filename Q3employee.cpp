#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;

    virtual void salary() {
        cout << "Employee Salary Details\n";
    }
};

class PermanentEmployee : public Employee {
public:
    float basic, bonus;

    void salary() override {
        cout << "\nPermanent Employee\n";
        cout << "Enter ID, Name, Basic Salary and Bonus: ";
        cin >> id >> name >> basic >> bonus;
        cout << "ID: " << id << "\nName: " << name;
        cout << "\nTotal Salary: " << basic + bonus << endl;
    }
};

class ContractEmployee : public Employee {
public:
    float days, rate;

    void salary() override {
        cout << "\nContract Employee\n";
        cout << "Enter ID, Name, Working Days and Daily Rate: ";
        cin >> id >> name >> days >> rate;
        cout << "ID: " << id << "\nName: " << name;
        cout << "\nTotal Salary: " << days * rate << endl;
    }
};

int main() {
    PermanentEmployee p;
    ContractEmployee c;

    p.salary();
    c.salary();

    return 0;
}
