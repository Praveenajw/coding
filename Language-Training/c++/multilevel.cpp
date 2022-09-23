#include<iostream>
using namespace std;
class father{
public:
void family(){
cout<<"matched";
}
};


class mother: public father{

};

class grandmaa:public mother{

};

int main(){
    grandmaa obj;
    obj.family();
    return 0;
}