#include <iostream>
#include <string>
using namespace std;

// shallow copy .............................

// class Car{
//     public:

//     string name, color;
//     int *mileage;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//         mileage = new int;  // dynamically allocated
//         *mileage = 12;
//     }

// };

// int main(){
//     Car c1("Maruti 800", "red");
//     Car c2(c1);  // automatically creates a copy that points to same memory location

//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;
//     cout<<*c2.mileage<<endl;

//     *c2.mileage = 10;

//     cout<<*c1.mileage;    // here we change the value of c2 and print c1 but c1 reflects the same change as in c2 => it means that 
//                          // both are pointing to the same memory location...  its shallow copy ..............
//     return 0;
// }







// Deep copy ..................................

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

};


int main(){
    Car c1("Maruti 800", "red");
    Car c2(c1);  

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;

    *c2.mileage = 10;

    cout<<*c1.mileage;    // now its totally diff memory loc , so deep copy and changes wont reflect...
    return 0;
}