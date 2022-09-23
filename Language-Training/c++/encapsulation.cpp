#include<iostream>
using namespace std;
class myclass{

private:
int salary;
public:
string name;

void setsalary(int s){
    salary=s;
}

int getsalary(){
    return salary;
}};
int main(){
    myclass obj;
    obj.name="praveena";
    obj.setsalary(50000);

    cout<<obj.name<<" ";
    cout<<obj.getsalary();
    return 0;
}