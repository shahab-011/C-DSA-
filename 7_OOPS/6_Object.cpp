#include<iostream>
using namespace std;

class fruit{
    public:
    string name;
    string colour;
};

int main(){
    fruit mango;
    mango.name="MANGO";
    mango.colour="YELLOW";
    cout<<mango.name<<" - "<<mango.colour<<endl;

    fruit *apple = new fruit;
    apple->name="APPLE";
    apple->colour="RED";
    cout<<apple->name<<" - "<<apple->colour;

return 0;
}