#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Setters with validation
    void setName(string n) {
        if (!n.empty()) {
            name = n;
        } else {
            cout << "Error: Product name cannot be empty." << endl;
        }
    }
    
    void setPrice(double p) {
        if (p > 0) {
            price = p;
        } else {
            cout << "Error: Price must be greater than 0." << endl;
        }
    }
    
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
        } else {
            cout << "Error: Quantity cannot be negative." << endl;
        }
    }
    
    // Getters
    string getName() const {
        return name;
    }
    
    double getPrice() const {
        return price;
    }
    
    int getQuantity() const {
        return quantity;
    }
};


int main() {
    Product p1;
    
    p1.setName("Laptop");
    p1.setPrice(999.99);
    p1.setQuantity(5);
    
    // Test validation
    p1.setName("");          //
    p1.setPrice(-10);        // 
    p1.setQuantity(-3);      // 
    
    cout << "Product: " << p1.getName() << endl;
    cout << "Price: $" << p1.getPrice() << endl;
    cout << "Quantity: " << p1.getQuantity() << endl;
    
    return 0;
}