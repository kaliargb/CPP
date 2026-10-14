#include <iostream>
using namespace std;

int main()
{
    double a, b;

    try
    {
        cout << "Enter first number: ";
        if (!(cin >> a))
            throw "Invalid input!";

        cout << "Enter second number: ";
        if (!(cin >> b))
            throw "Invalid input!";

        if (b == 0)
            throw "Division by zero is not allowed!";

        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
