#include <iostream>
#include <string>
using namespace std;


// automatically copy  constructor will created ............

// class Car{
//     public:

//     string name, color;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//     }

// };

// int main(){
//     Car c1("Maruti 800", "red");

//     // copy constructor takes another object as a parameter 
//     Car c2(c1);

//     cout<<"Name of Car 2 is : "<<c2.name;
//     return 0;
// }

//  defining custom copy constructor ...................

class Car{
    public:

    string name, color;

    Car(string name, string color){
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout<<"Copying from C1 to C2..."<<endl;
        name = original.name;
        color = original.color;
    }

};

int main(){
    Car c1("Maruti 800", "red");

    // copy constructor takes another object as a parameter 
    Car c2(c1);

    cout<<"Name of Car 2 is : "<<c2.name;
    return 0;
}

