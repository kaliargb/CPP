#include <iostream>
#include <string>
using namespace std;

class bankaccount{
public:
    int accountnumber;
    float balance;
    string name;
    static int count;

    // Constructor used to initialize details
    bankaccount(int accno , float bal , string n){
        accountnumber = accno;
        balance = bal;
        name = n;
        count ++;
        cout << "Bank account Created !"<<endl;
    }

    void displaydata(){
        cout << "\n --- Account Details ---"<<endl;
        cout << "Account number : "<<accountnumber<<endl;
        cout << "Balance : "<<balance<<endl;
        cout << "Name : "<<name<<endl;
    }
    // Destructor to delete details
    ~bankaccount(){
        cout << "\nBank account Destroyed ! \n"<<endl;
    }

    static void count_acc(){
        cout << "\nTotal Accounts Created Are: "<<count<<endl;
    }
};

// statci member (' :: ' - Scope Resolution Operator)
int bankaccount::count = 0;

int main(){
    bankaccount b1(220,300000.21,"Shri");
    bankaccount b2(220111,10000,"rajesh");
    b1.displaydata();
    b2.displaydata();
    bankaccount::count_acc();
    return 0;
}
