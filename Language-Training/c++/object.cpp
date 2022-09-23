#include<iostream>
using namespace std;
class myclass{  // The class
    public:     // Access specifier
    int reg;    //attribute
    string name; //attribute
};
int main()
{
    myclass object; // Create an object of MyClass

    // Access attributes and set values

    object.reg=4017;
    object.name="praveena";


    cout<<object.reg<<" ";
    cout<<object.name;
    return 0;
}