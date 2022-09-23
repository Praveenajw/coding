#include <iostream>
using namespace std;
class myclass{
    public:
    void hello();
};

void myclass::hello()
{
        cout<<"hello world";
    }


int main(){
myclass obj;
obj.hello();

return 0;



}