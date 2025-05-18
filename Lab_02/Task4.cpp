#include <iostream>
using namespace std;

class Locker {
public:
    // Constructor
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }
    
    // Destructor
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {
    cout << "Creating locker object inside a block:" << endl;
    {
        Locker locker1;
    } // Destructor called here
    
    cout << "\nCreating locker object using new/delete:" << endl;
    // Object created on heap - requires explicit deletion
    Locker* locker2 = new Locker();
    delete locker2; // Destructor called here
    cout << "\nProgram ending." << endl;
    return 0;
}