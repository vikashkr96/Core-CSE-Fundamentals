#include <iostream>
#include <string>
using namespace std;

class Car{
    string name;
    string color;

public:

    Car(string name, string color){
        cout << "Constructor is called .., the object is being created !\n";

        this->name = name;
        this->color = color;
    }

    void start(){
        cout << "The car is started !\n";
    }

    void stop(){
        cout << "The car is stopped !\n";
    }

    void getNameColor(){
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
    }
};

int main(){

    Car c1("Maruti 800", "Red");

    c1.getNameColor();

    return 0;
}
