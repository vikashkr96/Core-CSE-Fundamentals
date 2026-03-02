#include <iostream>
#include <string>
using namespace std;

class Programmer
{
  private:
    string name; // Private variable

  public:
    // Getter method to access the private data
    string getName()
    {
        return name;
    }

    // Setter method to modify the private data
    void setName(string newName)
    {
        name = newName;
    }
};

int main()
{
    Programmer p;
    p.setName("vikash kumar");                // Set the name
    cout << "Name=> " << p.getName() << endl; // Get the name
    return 0;
}