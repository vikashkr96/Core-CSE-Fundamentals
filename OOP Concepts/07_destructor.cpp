#include <iostream>
#include <string>
using namespace std;

class Car{
    public:

    string name, color;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;  // dynamically allocated
        *mileage = 12;
    }

    Car(Car &original){
        cout<<"copying to c2...."<<endl;
        name = original.name;
        color = original.color;
        mileage = new int;  // dynamically allocated
        *mileage = *original.mileage;
    }
    ~Car(){
        cout<<"deleting objects....";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }

};


int main(){
    Car c1("Maruti 800", "red");

    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
  
    return 0;
}