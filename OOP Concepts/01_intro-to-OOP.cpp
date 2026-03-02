#include <iostream>
using namespace std;

// Class Definition
class Student {
public:
// properties
    string name;
    int age;

    // methods
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Object Creation
    Student s1;

    // Assign values
    s1.name = "Vikash";
    s1.age = 20;

    // Call function
    s1.display();

    return 0;
}