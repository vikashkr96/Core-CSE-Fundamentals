#include <iostream>
#include <string>
using namespace std;

class Student{
    private:   // if we do not specify anything its by default private 
    string name;
    float cgpa;

    public:
    void getPercentage(){
        cout<<(cgpa*10)<<"%" <<endl;
    }
};

int main(){
    Student s1;
    // s1.name = "Vikash";
    // cout<< s1.name <<endl;
    return 0;
}


// output:  access_modifiers.cpp:19:15: error: 'std::__cxx11::string Student::name' is private within this context

// so  for this we have to use  getters and setters 

