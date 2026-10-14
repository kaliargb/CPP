#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    // Write data into file
    ofstream fout("Data.txt");

    e.getData();

    fout << e.id << " "
         << e.name << " "
         << e.salary << endl;

    fout.close();

    cout << "\nEmployee record saved successfully.\n";

    // Read data from file
    ifstream fin("employee.txt");

    fin >> e.id >> e.name >> e.salary;

    fin.close();

    cout << "\n--- Employee Record ---";
    e.display();

    return 0;
}
