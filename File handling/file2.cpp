#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("notes.txt");  // Open the file in read mode
    if (!file.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    int lineCount = 0;
    string line;

    // Read line by line and count
    while (getline(file, line)) {
        ++lineCount;
    }

    file.close();

    cout << "Total number of lines: " << lineCount << endl;

    return 0;
}
