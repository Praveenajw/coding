#include<iostream>
using namespace std;
// class myclass
// {
//     public:
//     myclass()
//     {
// cout<<"oops";
//     }
// };

// int main(){
//     myclass obj;
//     return 0;
// }

class myclass
{
    public:
    string name;
    string dep;
    int reg;

    myclass(string x,string y,int z){ // Constructor declaration 
    // Constructor definition outside the class
name=x;
dep=y;
reg=z;
    }
};

int main()
{
    myclass obj("ammu","cse",4017);
    myclass obj1("praveena","cse",4071);

    cout<<obj.name<<" "<<obj.dep<<" "<<obj.reg<<"\n";
    cout<<obj1.name<<" "<<obj1.dep<<" "<<obj1.reg;
    return 0;
}