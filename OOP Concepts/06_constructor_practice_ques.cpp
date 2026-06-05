#include <iostream>
#include <string>
using namespace std;

// question : 

// Create a User class with properties : id (private), username(public) & password (private).

// Its id should be initialized in a parameterized constructor.

// It should have a Getter & Setter for password.

class User{

    private:
        string id;
        string password;


    public:
        string username;

    // constructor for id initialization
    User(string id, string username){
        this->id = id;
        this->username = username;
    }

    // setter for password 
    void setPass(string password){
        this->password = password;
    }
    // getter for password 
    string getPass(){
        return this->password;
    }

    // getter for id / username
    void getIdUsername(){
        cout<<"ID: "<<this->id<<endl;
        cout<<"Username: "<<this->username<<endl;
    }
};

int main(){
    User u1("vchdydjs", "vikash_01");
    u1.getIdUsername();
    u1.setPass("Vk@12345");
    cout<<"Password: "<<u1.getPass();
    return 0;
}