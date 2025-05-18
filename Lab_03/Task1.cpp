#include<iostream>
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

    // Default copy constructor (shallow copy)
    BankAccount(const BankAccount& other) = default;

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

    // Create a copy constructor
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

    // Both objects point to the same memory location
    cout << "\nNotice both accounts share the same memory location!" << endl;

    return 0;
}