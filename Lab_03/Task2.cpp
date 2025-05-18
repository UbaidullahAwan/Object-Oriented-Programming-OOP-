#include <iostream>
using namespace std;

class BankAccount {
private:
    double* balance; // Pointer to store balance

public:
    // Constructor with dynamic memory allocation
    BankAccount(double initialBalance) {
        balance = new double(initialBalance);
        cout << "Constructor called. Allocated memory at: " << balance << endl;
    }

    // Deep copy constructor
    BankAccount(const BankAccount& other) {
        balance = new double(*other.balance); // Allocate new memory and copy value
        cout << "Deep copy constructor called. Allocated new memory at: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor called. Freeing memory at: " << balance << endl;
        delete balance;
    }

    // Method to set balance
    void setBalance(double newBalance) {
        *balance = newBalance;
    }

    // Method to get balance
    double getBalance() const {
        return *balance;
    }

    // Method to display balance
    void displayBalance() const {
        cout << "Balance: " << *balance << " (stored at: " << balance << ")" << endl;
    }
};

int main() {
    // Create original account
    BankAccount account1(1000.0);
    cout << "Original account: ";
    account1.displayBalance();

    // Create a copy using deep copy constructor
    BankAccount account2 = account1;
    cout << "\nCopied account (before modification): ";
    account2.displayBalance();

    // Modify the copied 
    account2.setBalance(2000.0);
    cout << "\nAfter modifying the copied account:" << endl;
    cout << "Original account: ";
    account1.displayBalance();
    cout << "Copied account: ";
    account2.displayBalance();

    // Show objects now have separate memory locations
    cout << "\nNotice accounts now have different memory locations!" << endl;

    return 0;
}