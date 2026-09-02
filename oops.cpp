#include<iostream>
#include<string>
using namespace std;
class Teacher{
    // Properties/Attributes
    public:

        string name;
        string dept;
        string subjects;
        double salary;
        void changedept (string newdept){
            dept=newdept;
        }

    };

int main(){
    Teacher t1;
    t1.name = "suraj";
    t1.subjects="c++";
    t1.dept="Computer Science";
    t1.salary=25000;

    cout << t1.name;
    return 0;
}